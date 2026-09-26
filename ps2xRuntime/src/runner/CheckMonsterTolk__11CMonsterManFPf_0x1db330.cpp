#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMonsterTolk__11CMonsterManFPf
// Address: 0x1db330 - 0x1db50c
void CheckMonsterTolk__11CMonsterManFPf_0x1db330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMonsterTolk__11CMonsterManFPf_0x1db330");
#endif

    switch (ctx->pc) {
        case 0x1db378u: goto label_1db378;
        case 0x1db390u: goto label_1db390;
        case 0x1db41cu: goto label_1db41c;
        case 0x1db444u: goto label_1db444;
        case 0x1db45cu: goto label_1db45c;
        default: break;
    }

    ctx->pc = 0x1db330u;

    // 0x1db330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1db330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1db334: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1db334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1db338: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1db338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1db33c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1db33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1db340: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1db340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1db344: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1db344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1db348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1db348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1db34c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1db34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1db350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db354: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1db354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1db358: 0x8c22f204  lw          $v0, -0xDFC($at)
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963716)));
    // 0x1db35c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DB35Cu;
    {
        const bool branch_taken_0x1db35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB35Cu;
            // 0x1db360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35c) {
            ctx->pc = 0x1DB3F0u;
            goto label_1db3f0;
        }
    }
    ctx->pc = 0x1DB364u;
    // 0x1db364: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1db368: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1db368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db36c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1db36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1db370: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1db370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db374: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1db374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db378:
    // 0x1db378: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1db37c: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1db37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1db380: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DB380u;
    {
        const bool branch_taken_0x1db380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB380u;
            // 0x1db384: 0x24540484  addiu       $s4, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db380) {
            ctx->pc = 0x1DB3D8u;
            goto label_1db3d8;
        }
    }
    ctx->pc = 0x1DB388u;
    // 0x1db388: 0xc0766cc  jal         func_1D9B30
    ctx->pc = 0x1DB388u;
    SET_GPR_U32(ctx, 31, 0x1DB390u);
    ctx->pc = 0x1DB38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB388u;
            // 0x1db38c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B30u;
    if (runtime->hasFunction(0x1D9B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB390u; }
        if (ctx->pc != 0x1DB390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsDraw__14CActiveMonsterFi_0x1d9b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB390u; }
        if (ctx->pc != 0x1DB390u) { return; }
    }
    ctx->pc = 0x1DB390u;
label_1db390:
    // 0x1db390: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DB390u;
    {
        const bool branch_taken_0x1db390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db390) {
            ctx->pc = 0x1DB3D8u;
            goto label_1db3d8;
        }
    }
    ctx->pc = 0x1DB398u;
    // 0x1db398: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1db39c: 0x8c821150  lw          $v0, 0x1150($a0)
    ctx->pc = 0x1db39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4432)));
    // 0x1db3a0: 0x8042006a  lb          $v0, 0x6A($v0)
    ctx->pc = 0x1db3a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1db3a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB3A4u;
    {
        const bool branch_taken_0x1db3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db3a4) {
            ctx->pc = 0x1DB3D8u;
            goto label_1db3d8;
        }
    }
    ctx->pc = 0x1DB3ACu;
    // 0x1db3ac: 0x8c831350  lw          $v1, 0x1350($a0)
    ctx->pc = 0x1db3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4944)));
    // 0x1db3b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB3B4u;
    {
        const bool branch_taken_0x1db3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db3b4) {
            ctx->pc = 0x1DB3D8u;
            goto label_1db3d8;
        }
    }
    ctx->pc = 0x1DB3BCu;
    // 0x1db3bc: 0xc48012f4  lwc1        $f0, 0x12F4($a0)
    ctx->pc = 0x1db3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db3c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1db3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db3c4: 0x0  nop
    ctx->pc = 0x1db3c4u;
    // NOP
    // 0x1db3c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB3C8u;
    {
        const bool branch_taken_0x1db3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db3c8) {
            ctx->pc = 0x1DB3D8u;
            goto label_1db3d8;
        }
    }
    ctx->pc = 0x1DB3D0u;
    // 0x1db3d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db3d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1db3d4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1db3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db3d8:
    // 0x1db3d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1db3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1db3dc: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x1db3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1db3e0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1DB3E0u;
    {
        const bool branch_taken_0x1db3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3E0u;
            // 0x1db3e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3e0) {
            ctx->pc = 0x1DB378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db378;
        }
    }
    ctx->pc = 0x1DB3E8u;
    // 0x1db3e8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1DB3E8u;
    {
        const bool branch_taken_0x1db3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB3E8u;
            // 0x1db3ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3e8) {
            ctx->pc = 0x1DB4E4u;
            goto label_1db4e4;
        }
    }
    ctx->pc = 0x1DB3F0u;
label_1db3f0:
    // 0x1db3f0: 0x8f838da0  lw          $v1, -0x7260($gp)
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1db3f4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1db3f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1db3fc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1db3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1db400: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1db400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x1db404: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB404u;
    {
        const bool branch_taken_0x1db404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB404u;
            // 0x1db408: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db404) {
            ctx->pc = 0x1DB414u;
            goto label_1db414;
        }
    }
    ctx->pc = 0x1DB40Cu;
    // 0x1db40c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1DB40Cu;
    {
        const bool branch_taken_0x1db40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB40Cu;
            // 0x1db410: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db40c) {
            ctx->pc = 0x1DB4E8u;
            goto label_1db4e8;
        }
    }
    ctx->pc = 0x1DB414u;
label_1db414:
    // 0x1db414: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1DB414u;
    SET_GPR_U32(ctx, 31, 0x1DB41Cu);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB41Cu; }
        if (ctx->pc != 0x1DB41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB41Cu; }
        if (ctx->pc != 0x1DB41Cu) { return; }
    }
    ctx->pc = 0x1DB41Cu;
label_1db41c:
    // 0x1db41c: 0x84520002  lh          $s2, 0x2($v0)
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1db420: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db424: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB424u;
    {
        const bool branch_taken_0x1db424 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DB428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB424u;
            // 0x1db428: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db424) {
            ctx->pc = 0x1DB434u;
            goto label_1db434;
        }
    }
    ctx->pc = 0x1DB42Cu;
    // 0x1db42c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1DB42Cu;
    {
        const bool branch_taken_0x1db42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db42c) {
            ctx->pc = 0x1DB4E4u;
            goto label_1db4e4;
        }
    }
    ctx->pc = 0x1DB434u;
label_1db434:
    // 0x1db434: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db438: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1db438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1db43c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1db43cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db440: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1db440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1db444:
    // 0x1db444: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1db448: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1db448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1db44c: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DB44Cu;
    {
        const bool branch_taken_0x1db44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB44Cu;
            // 0x1db450: 0x24550484  addiu       $s5, $v0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db44c) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB454u;
    // 0x1db454: 0xc0766cc  jal         func_1D9B30
    ctx->pc = 0x1DB454u;
    SET_GPR_U32(ctx, 31, 0x1DB45Cu);
    ctx->pc = 0x1DB458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB454u;
            // 0x1db458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B30u;
    if (runtime->hasFunction(0x1D9B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB45Cu; }
        if (ctx->pc != 0x1DB45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsDraw__14CActiveMonsterFi_0x1d9b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB45Cu; }
        if (ctx->pc != 0x1DB45Cu) { return; }
    }
    ctx->pc = 0x1DB45Cu;
label_1db45c:
    // 0x1db45c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB45Cu;
    {
        const bool branch_taken_0x1db45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db45c) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB464u;
    // 0x1db464: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1db464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1db468: 0x8c831150  lw          $v1, 0x1150($a0)
    ctx->pc = 0x1db468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4432)));
    // 0x1db46c: 0x80620054  lb          $v0, 0x54($v1)
    ctx->pc = 0x1db46cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1db470: 0x14520016  bne         $v0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB470u;
    {
        const bool branch_taken_0x1db470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1db470) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB478u;
    // 0x1db478: 0x8062006a  lb          $v0, 0x6A($v1)
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x1db47c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB47Cu;
    {
        const bool branch_taken_0x1db47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db47c) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB484u;
    // 0x1db484: 0x8c831350  lw          $v1, 0x1350($a0)
    ctx->pc = 0x1db484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4944)));
    // 0x1db488: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1db488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db48c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DB48Cu;
    {
        const bool branch_taken_0x1db48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db48c) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB494u;
    // 0x1db494: 0xc481131c  lwc1        $f1, 0x131C($a0)
    ctx->pc = 0x1db494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db49c: 0x0  nop
    ctx->pc = 0x1db49cu;
    // NOP
    // 0x1db4a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db4a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db4a4: 0x0  nop
    ctx->pc = 0x1db4a4u;
    // NOP
    // 0x1db4a8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB4A8u;
    {
        const bool branch_taken_0x1db4a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db4a8) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB4B0u;
    // 0x1db4b0: 0xc48012f4  lwc1        $f0, 0x12F4($a0)
    ctx->pc = 0x1db4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db4b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1db4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db4b8: 0x0  nop
    ctx->pc = 0x1db4b8u;
    // NOP
    // 0x1db4bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB4BCu;
    {
        const bool branch_taken_0x1db4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db4bc) {
            ctx->pc = 0x1DB4CCu;
            goto label_1db4cc;
        }
    }
    ctx->pc = 0x1DB4C4u;
    // 0x1db4c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1db4c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1db4c8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1db4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db4cc:
    // 0x1db4cc: 0x0  nop
    ctx->pc = 0x1db4ccu;
    // NOP
    // 0x1db4d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1db4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1db4d4: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x1db4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1db4d8: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1DB4D8u;
    {
        const bool branch_taken_0x1db4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB4D8u;
            // 0x1db4dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4d8) {
            ctx->pc = 0x1DB444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db444;
        }
    }
    ctx->pc = 0x1DB4E0u;
    // 0x1db4e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1db4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db4e4:
    // 0x1db4e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1db4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1db4e8:
    // 0x1db4e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1db4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db4ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1db4ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db4f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db4f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db4f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1db4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db4f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1db4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db4fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1db4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db500: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db504: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB504u;
            // 0x1db508: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB50Cu;
}
