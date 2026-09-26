#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHitVertical__FP13CollisionInfoPffPfi
// Address: 0x14e200 - 0x14e3ac
void CheckHitVertical__FP13CollisionInfoPffPfi_0x14e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHitVertical__FP13CollisionInfoPffPfi_0x14e200");
#endif

    switch (ctx->pc) {
        case 0x14e28cu: goto label_14e28c;
        case 0x14e2b8u: goto label_14e2b8;
        default: break;
    }

    ctx->pc = 0x14e200u;

    // 0x14e200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14e204: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14e208: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14e20c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14e210: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14e210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e214: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14e214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14e218: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e21c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14e220: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14e220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e224: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e22c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e230: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14e230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e234: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e238: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E238u;
    {
        const bool branch_taken_0x14e238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E238u;
            // 0x14e23c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e238) {
            ctx->pc = 0x14E248u;
            goto label_14e248;
        }
    }
    ctx->pc = 0x14E240u;
    // 0x14e240: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x14E240u;
    {
        const bool branch_taken_0x14e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E240u;
            // 0x14e244: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e240) {
            ctx->pc = 0x14E37Cu;
            goto label_14e37c;
        }
    }
    ctx->pc = 0x14E248u;
label_14e248:
    // 0x14e248: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x14e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e24c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x14e24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x14e250: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x14e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e254: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x14e254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x14e258: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x14e258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x14e25c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x14e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e260: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x14e260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x14e264: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x14e264u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e268: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x14e268u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e26c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E26Cu;
    {
        const bool branch_taken_0x14e26c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E26Cu;
            // 0x14e270: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e26c) {
            ctx->pc = 0x14E27Cu;
            goto label_14e27c;
        }
    }
    ctx->pc = 0x14E274u;
    // 0x14e274: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E274u;
    {
        const bool branch_taken_0x14e274 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E274u;
            // 0x14e278: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e274) {
            ctx->pc = 0x14E284u;
            goto label_14e284;
        }
    }
    ctx->pc = 0x14E27Cu;
label_14e27c:
    // 0x14e27c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14E27Cu;
    {
        const bool branch_taken_0x14e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E27Cu;
            // 0x14e280: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e27c) {
            ctx->pc = 0x14E37Cu;
            goto label_14e37c;
        }
    }
    ctx->pc = 0x14E284u;
label_14e284:
    // 0x14e284: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x14E284u;
    {
        const bool branch_taken_0x14e284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E284u;
            // 0x14e288: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e284) {
            ctx->pc = 0x14E370u;
            goto label_14e370;
        }
    }
    ctx->pc = 0x14E28Cu;
label_14e28c:
    // 0x14e28c: 0x86420046  lh          $v0, 0x46($s2)
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x14e290: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x14e290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x14e294: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14E294u;
    {
        const bool branch_taken_0x14e294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E294u;
            // 0x14e298: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e294) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E29Cu;
    // 0x14e29c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14e2a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e2a4: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x14e2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14e2a8: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x14e2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x14e2ac: 0x26490030  addiu       $t1, $s2, 0x30
    ctx->pc = 0x14e2acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x14e2b0: 0xc04be94  jal         func_12FA50
    ctx->pc = 0x14E2B0u;
    SET_GPR_U32(ctx, 31, 0x14E2B8u);
    ctx->pc = 0x14E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2B0u;
            // 0x14e2b4: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FA50u;
    if (runtime->hasFunction(0x12FA50u)) {
        auto targetFn = runtime->lookupFunction(0x12FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2B8u; }
        if (ctx->pc != 0x14E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf_0x12fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2B8u; }
        if (ctx->pc != 0x14E2B8u) { return; }
    }
    ctx->pc = 0x14E2B8u;
label_14e2b8:
    // 0x14e2b8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x14E2B8u;
    {
        const bool branch_taken_0x14e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2b8) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E2C0u;
    // 0x14e2c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14e2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e2c4: 0x0  nop
    ctx->pc = 0x14e2c4u;
    // NOP
    // 0x14e2c8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14e2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e2cc: 0x0  nop
    ctx->pc = 0x14e2ccu;
    // NOP
    // 0x14e2d0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x14E2D0u;
    {
        const bool branch_taken_0x14e2d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e2d0) {
            ctx->pc = 0x14E31Cu;
            goto label_14e31c;
        }
    }
    ctx->pc = 0x14E2D8u;
    // 0x14e2d8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x14e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e2dc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x14e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e2e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14e2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e2e4: 0x0  nop
    ctx->pc = 0x14e2e4u;
    // NOP
    // 0x14e2e8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x14E2E8u;
    {
        const bool branch_taken_0x14e2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e2e8) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E2F0u;
    // 0x14e2f0: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E2F0u;
    {
        const bool branch_taken_0x14e2f0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x14e2f0) {
            ctx->pc = 0x14E310u;
            goto label_14e310;
        }
    }
    ctx->pc = 0x14E2F8u;
    // 0x14e2f8: 0x6200019  bltz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14E2F8u;
    {
        const bool branch_taken_0x14e2f8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x14e2f8) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E300u;
    // 0x14e300: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x14e300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e304: 0x0  nop
    ctx->pc = 0x14e304u;
    // NOP
    // 0x14e308: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x14E308u;
    {
        const bool branch_taken_0x14e308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e308) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E310u;
label_14e310:
    // 0x14e310: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14e310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e314: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14E314u;
    {
        const bool branch_taken_0x14e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E314u;
            // 0x14e318: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e314) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E31Cu;
label_14e31c:
    // 0x14e31c: 0x0  nop
    ctx->pc = 0x14e31cu;
    // NOP
    // 0x14e320: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x14e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e324: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x14e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e328: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14e328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e32c: 0x0  nop
    ctx->pc = 0x14e32cu;
    // NOP
    // 0x14e330: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14E330u;
    {
        const bool branch_taken_0x14e330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e330) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E338u;
    // 0x14e338: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E338u;
    {
        const bool branch_taken_0x14e338 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x14e338) {
            ctx->pc = 0x14E358u;
            goto label_14e358;
        }
    }
    ctx->pc = 0x14E340u;
    // 0x14e340: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E340u;
    {
        const bool branch_taken_0x14e340 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x14e340) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E348u;
    // 0x14e348: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x14e348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e34c: 0x0  nop
    ctx->pc = 0x14e34cu;
    // NOP
    // 0x14e350: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14E350u;
    {
        const bool branch_taken_0x14e350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e350) {
            ctx->pc = 0x14E360u;
            goto label_14e360;
        }
    }
    ctx->pc = 0x14E358u;
label_14e358:
    // 0x14e358: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x14e358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e35c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x14e35cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_14e360:
    // 0x14e360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14e360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e364: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x14e364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x14e368: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14E368u;
    {
        const bool branch_taken_0x14e368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E368u;
            // 0x14e36c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e368) {
            ctx->pc = 0x14E28Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e28c;
        }
    }
    ctx->pc = 0x14E370u;
label_14e370:
    // 0x14e370: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E370u;
    {
        const bool branch_taken_0x14e370 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x14E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E370u;
            // 0x14e374: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e370) {
            ctx->pc = 0x14E37Cu;
            goto label_14e37c;
        }
    }
    ctx->pc = 0x14E378u;
    // 0x14e378: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x14e378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_14e37c:
    // 0x14e37c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14e37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e380: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14e384: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14e384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e388: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e38c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14e38cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e390: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14e390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e394: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14e394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e398: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e39c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e3a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3A4u;
            // 0x14e3a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E3ACu;
}
