#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCharaViewCheck__FP10CHARA_DATAii
// Address: 0x24a2f0 - 0x24a548
void MenuItemCharaViewCheck__FP10CHARA_DATAii_0x24a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCharaViewCheck__FP10CHARA_DATAii_0x24a2f0");
#endif

    switch (ctx->pc) {
        case 0x24a354u: goto label_24a354;
        case 0x24a364u: goto label_24a364;
        case 0x24a370u: goto label_24a370;
        case 0x24a394u: goto label_24a394;
        case 0x24a404u: goto label_24a404;
        case 0x24a418u: goto label_24a418;
        case 0x24a420u: goto label_24a420;
        case 0x24a434u: goto label_24a434;
        case 0x24a440u: goto label_24a440;
        case 0x24a484u: goto label_24a484;
        case 0x24a4f0u: goto label_24a4f0;
        case 0x24a504u: goto label_24a504;
        case 0x24a518u: goto label_24a518;
        default: break;
    }

    ctx->pc = 0x24a2f0u;

    // 0x24a2f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24a2f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24a2f8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x24a2fc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x24a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x24a300: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x24a300u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a304: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24a308: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24a30c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24a30cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a310: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24a314: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24a318: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24a31c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24a320: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x24a320u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24a324: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24a324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24a328: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a32c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x24a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24a330: 0x8c760180  lw          $s6, 0x180($v1)
    ctx->pc = 0x24a330u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x24a334: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x24a334u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x24a338: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x24A338u;
    {
        const bool branch_taken_0x24a338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A338u;
            // 0x24a33c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a338) {
            ctx->pc = 0x24A518u;
            goto label_24a518;
        }
    }
    ctx->pc = 0x24A340u;
    // 0x24a340: 0x92c30058  lbu         $v1, 0x58($s6)
    ctx->pc = 0x24a340u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x24a344: 0x18600074  blez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x24A344u;
    {
        const bool branch_taken_0x24a344 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x24a344) {
            ctx->pc = 0x24A518u;
            goto label_24a518;
        }
    }
    ctx->pc = 0x24A34Cu;
    // 0x24a34c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x24A34Cu;
    SET_GPR_U32(ctx, 31, 0x24A354u);
    ctx->pc = 0x24A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A34Cu;
            // 0x24a350: 0xc78c9750  lwc1        $f12, -0x68B0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A354u; }
        if (ctx->pc != 0x24A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A354u; }
        if (ctx->pc != 0x24A354u) { return; }
    }
    ctx->pc = 0x24A354u;
label_24a354:
    // 0x24a354: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x24a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x24a358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a35c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A35Cu;
    SET_GPR_U32(ctx, 31, 0x24A364u);
    ctx->pc = 0x24A360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A35Cu;
            // 0x24a360: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A364u; }
        if (ctx->pc != 0x24A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A364u; }
        if (ctx->pc != 0x24A364u) { return; }
    }
    ctx->pc = 0x24A364u;
label_24a364:
    // 0x24a364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a368: 0xc065b6c  jal         func_196DB0
    ctx->pc = 0x24A368u;
    SET_GPR_U32(ctx, 31, 0x24A370u);
    ctx->pc = 0x24A36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A368u;
            // 0x24a36c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DB0u;
    if (runtime->hasFunction(0x196DB0u)) {
        auto targetFn = runtime->lookupFunction(0x196DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A370u; }
        if (ctx->pc != 0x24A370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonGageRate__FP11COMMON_GAGE_0x196db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A370u; }
        if (ctx->pc != 0x24A370u) { return; }
    }
    ctx->pc = 0x24A370u;
label_24a370:
    // 0x24a370: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a374: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x24a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24a378: 0x8c5102b8  lw          $s1, 0x2B8($v0)
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
    // 0x24a37c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x24A37Cu;
    {
        const bool branch_taken_0x24a37c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A37Cu;
            // 0x24a380: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a37c) {
            ctx->pc = 0x24A3FCu;
            goto label_24a3fc;
        }
    }
    ctx->pc = 0x24A384u;
    // 0x24a384: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x24a384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
    // 0x24a388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a38c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A38Cu;
    SET_GPR_U32(ctx, 31, 0x24A394u);
    ctx->pc = 0x24A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A38Cu;
            // 0x24a390: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A394u; }
        if (ctx->pc != 0x24A394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A394u; }
        if (ctx->pc != 0x24A394u) { return; }
    }
    ctx->pc = 0x24A394u;
label_24a394:
    // 0x24a394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a398: 0x0  nop
    ctx->pc = 0x24a398u;
    // NOP
    // 0x24a39c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24a39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24a3a0: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x24a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
    // 0x24a3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a3a8: 0x0  nop
    ctx->pc = 0x24a3a8u;
    // NOP
    // 0x24a3ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24a3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a3b0: 0x0  nop
    ctx->pc = 0x24a3b0u;
    // NOP
    // 0x24a3b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24A3B4u;
    {
        const bool branch_taken_0x24a3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A3B4u;
            // 0x24a3b8: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3b4) {
            ctx->pc = 0x24A3C0u;
            goto label_24a3c0;
        }
    }
    ctx->pc = 0x24A3BCu;
    // 0x24a3bc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x24a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_24a3c0:
    // 0x24a3c0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x24a3c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a3c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24a3cc: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x24a3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x24a3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a3d4: 0xa2230008  sb          $v1, 0x8($s1)
    ctx->pc = 0x24a3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x24a3d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24a3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a3dc: 0x0  nop
    ctx->pc = 0x24a3dcu;
    // NOP
    // 0x24a3e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24A3E0u;
    {
        const bool branch_taken_0x24a3e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A3E0u;
            // 0x24a3e4: 0xa2230009  sb          $v1, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3e0) {
            ctx->pc = 0x24A3FCu;
            goto label_24a3fc;
        }
    }
    ctx->pc = 0x24A3E8u;
    // 0x24a3e8: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24a3ec: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x24a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x24a3f0: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x24a3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x24a3f4: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x24a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a3f8: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x24a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_24a3fc:
    // 0x24a3fc: 0xc0945c8  jal         func_251720
    ctx->pc = 0x24A3FCu;
    SET_GPR_U32(ctx, 31, 0x24A404u);
    ctx->pc = 0x24A400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A3FCu;
            // 0x24a400: 0xc6ac0004  lwc1        $f12, 0x4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A404u; }
        if (ctx->pc != 0x24A404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A404u; }
        if (ctx->pc != 0x24A404u) { return; }
    }
    ctx->pc = 0x24A404u;
label_24a404:
    // 0x24a404: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a408: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a40c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a410: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A410u;
    SET_GPR_U32(ctx, 31, 0x24A418u);
    ctx->pc = 0x24A414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A410u;
            // 0x24a414: 0x24a5acf8  addiu       $a1, $a1, -0x5308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A418u; }
        if (ctx->pc != 0x24A418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A418u; }
        if (ctx->pc != 0x24A418u) { return; }
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A418u;
    SET_GPR_U32(ctx, 31, 0x24A420u);
    ctx->pc = 0x24A41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A418u;
            // 0x24a41c: 0xc6ac0000  lwc1        $f12, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A420u; }
        if (ctx->pc != 0x24A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A420u; }
        if (ctx->pc != 0x24A420u) { return; }
    }
    ctx->pc = 0x24A420u;
label_24a420:
    // 0x24a420: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a42c: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A42Cu;
    SET_GPR_U32(ctx, 31, 0x24A434u);
    ctx->pc = 0x24A430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A42Cu;
            // 0x24a430: 0x24a5ad00  addiu       $a1, $a1, -0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A434u; }
        if (ctx->pc != 0x24A434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A434u; }
        if (ctx->pc != 0x24A434u) { return; }
    }
    ctx->pc = 0x24A434u;
label_24a434:
    // 0x24a434: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24a434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a438: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24a438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a43c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24a43cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a440:
    // 0x24a440: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a444: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x24a448: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x24a44c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24a450: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24a454: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24a458: 0x8c4302c0  lw          $v1, 0x2C0($v0)
    ctx->pc = 0x24a458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x24a45c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x24A45Cu;
    {
        const bool branch_taken_0x24a45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A45Cu;
            // 0x24a460: 0x2b32021  addu        $a0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a45c) {
            ctx->pc = 0x24A4D0u;
            goto label_24a4d0;
        }
    }
    ctx->pc = 0x24A464u;
    // 0x24a464: 0x8482002e  lh          $v0, 0x2E($a0)
    ctx->pc = 0x24a464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x24a468: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x24a468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x24a46c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a470: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24a474: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24a478: 0x8c5102d8  lw          $s1, 0x2D8($v0)
    ctx->pc = 0x24a478u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    // 0x24a47c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x24A47Cu;
    SET_GPR_U32(ctx, 31, 0x24A484u);
    ctx->pc = 0x24A480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A47Cu;
            // 0x24a480: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A484u; }
        if (ctx->pc != 0x24A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A484u; }
        if (ctx->pc != 0x24A484u) { return; }
    }
    ctx->pc = 0x24A484u;
label_24a484:
    // 0x24a484: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x24a484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x24a488: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x24a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x24a48c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x24a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24a490: 0x27829590  addiu       $v0, $gp, -0x6A70
    ctx->pc = 0x24a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940048));
    // 0x24a494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24a498: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24a49c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x24a49cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a4a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A4A0u;
    {
        const bool branch_taken_0x24a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A4A0u;
            // 0x24a4a4: 0x24030052  addiu       $v1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4a0) {
            ctx->pc = 0x24A4BCu;
            goto label_24a4bc;
        }
    }
    ctx->pc = 0x24A4A8u;
    // 0x24a4a8: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x24a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x24a4ac: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x24a4acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x24a4b0: 0xa2230008  sb          $v1, 0x8($s1)
    ctx->pc = 0x24a4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x24a4b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A4B4u;
    {
        const bool branch_taken_0x24a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A4B4u;
            // 0x24a4b8: 0xa2220009  sb          $v0, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4b4) {
            ctx->pc = 0x24A4D0u;
            goto label_24a4d0;
        }
    }
    ctx->pc = 0x24A4BCu;
label_24a4bc:
    // 0x24a4bc: 0x0  nop
    ctx->pc = 0x24a4bcu;
    // NOP
    // 0x24a4c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x24a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24a4c4: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x24a4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a4c8: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x24a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a4cc: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x24a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
label_24a4d0:
    // 0x24a4d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24a4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24a4d4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x24a4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24a4d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x24a4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x24a4dc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x24A4DCu;
    {
        const bool branch_taken_0x24a4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A4DCu;
            // 0x24a4e0: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4dc) {
            ctx->pc = 0x24A440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a440;
        }
    }
    ctx->pc = 0x24A4E4u;
    // 0x24a4e4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x24a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x24a4e8: 0xc067194  jal         func_19C650
    ctx->pc = 0x24A4E8u;
    SET_GPR_U32(ctx, 31, 0x24A4F0u);
    ctx->pc = 0x24A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A4E8u;
            // 0x24a4ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C650u;
    if (runtime->hasFunction(0x19C650u)) {
        auto targetFn = runtime->lookupFunction(0x19C650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A4F0u; }
        if (ctx->pc != 0x24A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__16CUserDataManagerFi_0x19c650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A4F0u; }
        if (ctx->pc != 0x24A4F0u) { return; }
    }
    ctx->pc = 0x24A4F0u;
label_24a4f0:
    // 0x24a4f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a4f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4fc: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A4FCu;
    SET_GPR_U32(ctx, 31, 0x24A504u);
    ctx->pc = 0x24A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A4FCu;
            // 0x24a500: 0x24a5b970  addiu       $a1, $a1, -0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A504u; }
        if (ctx->pc != 0x24A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A504u; }
        if (ctx->pc != 0x24A504u) { return; }
    }
    ctx->pc = 0x24A504u;
label_24a504:
    // 0x24a504: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24a504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a508: 0x26a50170  addiu       $a1, $s5, 0x170
    ctx->pc = 0x24a508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
    // 0x24a50c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x24a50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a510: 0xc0927a4  jal         func_249E90
    ctx->pc = 0x24A510u;
    SET_GPR_U32(ctx, 31, 0x24A518u);
    ctx->pc = 0x24A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A510u;
            // 0x24a514: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249E90u;
    if (runtime->hasFunction(0x249E90u)) {
        auto targetFn = runtime->lookupFunction(0x249E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A518u; }
        if (ctx->pc != 0x24A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaActWepInfoDraw__FP16CMenuPosDataFormP13CGameDataUsedii_0x249e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A518u; }
        if (ctx->pc != 0x24A518u) { return; }
    }
    ctx->pc = 0x24A518u;
label_24a518:
    // 0x24a518: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24a518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a51c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24a51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a520: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x24a520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a524: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x24a524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a528: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24a528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a52c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24a52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a530: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24a530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a534: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24a534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24a538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a53c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24a53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a540: 0x3e00008  jr          $ra
    ctx->pc = 0x24A540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A540u;
            // 0x24a544: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A548u;
}
