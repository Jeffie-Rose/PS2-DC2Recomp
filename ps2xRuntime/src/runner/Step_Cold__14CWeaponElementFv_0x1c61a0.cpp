#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step_Cold__14CWeaponElementFv
// Address: 0x1c61a0 - 0x1c6658
void Step_Cold__14CWeaponElementFv_0x1c61a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step_Cold__14CWeaponElementFv_0x1c61a0");
#endif

    switch (ctx->pc) {
        case 0x1c61e4u: goto label_1c61e4;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c62b8u: goto label_1c62b8;
        case 0x1c62f4u: goto label_1c62f4;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c6410u: goto label_1c6410;
        case 0x1c6458u: goto label_1c6458;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64e8u: goto label_1c64e8;
        case 0x1c6528u: goto label_1c6528;
        case 0x1c6568u: goto label_1c6568;
        case 0x1c65a4u: goto label_1c65a4;
        case 0x1c65bcu: goto label_1c65bc;
        case 0x1c65f8u: goto label_1c65f8;
        default: break;
    }

    ctx->pc = 0x1c61a0u;

    // 0x1c61a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c61a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c61a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c61a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c61a8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c61a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c61ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c61acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c61b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c61b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c61b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c61b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c61b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c61bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c61c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c61c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c61c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c61c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c61c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c61c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c61ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c61d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c61d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c61d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c61d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c61d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c61dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c61e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c61e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c61e4:
    // 0x1c61e4: 0x2d1a021  addu        $s4, $s6, $s1
    ctx->pc = 0x1c61e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1c61e8: 0xc6800520  lwc1        $f0, 0x520($s4)
    ctx->pc = 0x1c61e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c61ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c61ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c61f0: 0x0  nop
    ctx->pc = 0x1c61f0u;
    // NOP
    // 0x1c61f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c61f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c61f8: 0x0  nop
    ctx->pc = 0x1c61f8u;
    // NOP
    // 0x1c61fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C61FCu;
    {
        const bool branch_taken_0x1c61fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61FCu;
            // 0x1c6200: 0x26950520  addiu       $s5, $s4, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61fc) {
            ctx->pc = 0x1C620Cu;
            goto label_1c620c;
        }
    }
    ctx->pc = 0x1C6204u;
    // 0x1c6204: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1C6204u;
    {
        const bool branch_taken_0x1c6204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6204u;
            // 0x1c6208: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6204) {
            ctx->pc = 0x1C6384u;
            goto label_1c6384;
        }
    }
    ctx->pc = 0x1C620Cu;
label_1c620c:
    // 0x1c620c: 0x0  nop
    ctx->pc = 0x1c620cu;
    // NOP
    // 0x1c6210: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6210u;
    SET_GPR_U32(ctx, 31, 0x1C6218u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6218u; }
        if (ctx->pc != 0x1C6218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6218u; }
        if (ctx->pc != 0x1C6218u) { return; }
    }
    ctx->pc = 0x1C6218u;
label_1c6218:
    // 0x1c6218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c621c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1c6220: 0x3467999a  ori         $a3, $v1, 0x999A
    ctx->pc = 0x1c6220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1c6224: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1c6224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6228: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c6228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c622c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c6230: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1c6230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c6234: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x1c6234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c6238: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1c6238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x1c623c: 0x268804a0  addiu       $t0, $s4, 0x4A0
    ctx->pc = 0x1c623cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1184));
    // 0x1c6240: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1c6240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1c6244: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1c6244u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6248: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1c6248u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c624c: 0x0  nop
    ctx->pc = 0x1c624cu;
    // NOP
    // 0x1c6250: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c6250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c6254: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x1c6254u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1c6258: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1c6258u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c625c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1c625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6260: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1c6260u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1c6264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6268: 0x0  nop
    ctx->pc = 0x1c6268u;
    // NOP
    // 0x1c626c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c626cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c6270: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1c6270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1c6274: 0xc68204a0  lwc1        $f2, 0x4A0($s4)
    ctx->pc = 0x1c6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c627c: 0x0  nop
    ctx->pc = 0x1c627cu;
    // NOP
    // 0x1c6280: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c6280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c6284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6288: 0x0  nop
    ctx->pc = 0x1c6288u;
    // NOP
    // 0x1c628c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C628Cu;
    {
        const bool branch_taken_0x1c628c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C628Cu;
            // 0x1c6290: 0xe68104a0  swc1        $f1, 0x4A0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c628c) {
            ctx->pc = 0x1C629Cu;
            goto label_1c629c;
        }
    }
    ctx->pc = 0x1C6294u;
    // 0x1c6294: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1c6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1c6298: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1c6298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1c629c:
    // 0x1c629c: 0x0  nop
    ctx->pc = 0x1c629cu;
    // NOP
    // 0x1c62a0: 0x86c4073a  lh          $a0, 0x73A($s6)
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c62a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c62a8: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C62A8u;
    {
        const bool branch_taken_0x1c62a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c62a8) {
            ctx->pc = 0x1C6308u;
            goto label_1c6308;
        }
    }
    ctx->pc = 0x1C62B0u;
    // 0x1c62b0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C62B0u;
    SET_GPR_U32(ctx, 31, 0x1C62B8u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62B8u; }
        if (ctx->pc != 0x1C62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62B8u; }
        if (ctx->pc != 0x1C62B8u) { return; }
    }
    ctx->pc = 0x1C62B8u;
label_1c62b8:
    // 0x1c62b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c62b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c62bc: 0x0  nop
    ctx->pc = 0x1c62bcu;
    // NOP
    // 0x1c62c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c62c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c62c4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c62c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c62c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c62cc: 0x0  nop
    ctx->pc = 0x1c62ccu;
    // NOP
    // 0x1c62d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c62d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c62d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c62d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c62d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c62dc: 0x0  nop
    ctx->pc = 0x1c62dcu;
    // NOP
    // 0x1c62e0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c62e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c62e4: 0x0  nop
    ctx->pc = 0x1c62e4u;
    // NOP
    // 0x1c62e8: 0x0  nop
    ctx->pc = 0x1c62e8u;
    // NOP
    // 0x1c62ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C62ECu;
    SET_GPR_U32(ctx, 31, 0x1C62F4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62F4u; }
        if (ctx->pc != 0x1C62F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62F4u; }
        if (ctx->pc != 0x1C62F4u) { return; }
    }
    ctx->pc = 0x1C62F4u;
label_1c62f4:
    // 0x1c62f4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1c62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c62f8: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x1c62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1c62fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c62fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c6300: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c6300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c6304: 0xa46406fa  sh          $a0, 0x6FA($v1)
    ctx->pc = 0x1c6304u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1786), (uint16_t)GPR_U32(ctx, 4));
label_1c6308:
    // 0x1c6308: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1c630c: 0x246506ba  addiu       $a1, $v1, 0x6BA
    ctx->pc = 0x1c630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1722));
    // 0x1c6310: 0x846306ba  lh          $v1, 0x6BA($v1)
    ctx->pc = 0x1c6310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1722)));
    // 0x1c6314: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6314u;
    {
        const bool branch_taken_0x1c6314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6314) {
            ctx->pc = 0x1C634Cu;
            goto label_1c634c;
        }
    }
    ctx->pc = 0x1C631Cu;
    // 0x1c631c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6320: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x1c6320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x1c6324: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c632c: 0x0  nop
    ctx->pc = 0x1c632cu;
    // NOP
    // 0x1c6330: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c6330u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c6334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6338: 0x0  nop
    ctx->pc = 0x1c6338u;
    // NOP
    // 0x1c633c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C633Cu;
    {
        const bool branch_taken_0x1c633c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C633Cu;
            // 0x1c6340: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c633c) {
            ctx->pc = 0x1C6384u;
            goto label_1c6384;
        }
    }
    ctx->pc = 0x1C6344u;
    // 0x1c6344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C6344u;
    {
        const bool branch_taken_0x1c6344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6344u;
            // 0x1c6348: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6344) {
            ctx->pc = 0x1C6384u;
            goto label_1c6384;
        }
    }
    ctx->pc = 0x1C634Cu;
label_1c634c:
    // 0x1c634c: 0x0  nop
    ctx->pc = 0x1c634cu;
    // NOP
    // 0x1c6350: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x1c6350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x1c6354: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c6354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6358: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1c6358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1c635c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c635cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6364: 0x0  nop
    ctx->pc = 0x1c6364u;
    // NOP
    // 0x1c6368: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c6368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c636c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c636cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6370: 0x0  nop
    ctx->pc = 0x1c6370u;
    // NOP
    // 0x1c6374: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6374u;
    {
        const bool branch_taken_0x1c6374 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6374u;
            // 0x1c6378: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6374) {
            ctx->pc = 0x1C6384u;
            goto label_1c6384;
        }
    }
    ctx->pc = 0x1C637Cu;
    // 0x1c637c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6380: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1c6380u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1c6384:
    // 0x1c6384: 0x0  nop
    ctx->pc = 0x1c6384u;
    // NOP
    // 0x1c6388: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c6388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c638c: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c638cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c6390: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c6390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c6394: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1c6394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c6398: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1C6398u;
    {
        const bool branch_taken_0x1c6398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6398u;
            // 0x1c639c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6398) {
            ctx->pc = 0x1C61E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c61e4;
        }
    }
    ctx->pc = 0x1C63A0u;
    // 0x1c63a0: 0x86c3073a  lh          $v1, 0x73A($s6)
    ctx->pc = 0x1c63a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c63a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c63a8: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c63a8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c63ac: 0x86c3073a  lh          $v1, 0x73A($s6)
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c63b0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C63B0u;
    {
        const bool branch_taken_0x1c63b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C63B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63B0u;
            // 0x1c63b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63b0) {
            ctx->pc = 0x1C63BCu;
            goto label_1c63bc;
        }
    }
    ctx->pc = 0x1C63B8u;
    // 0x1c63b8: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c63b8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
label_1c63bc:
    // 0x1c63bc: 0x86c306b8  lh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c63bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1720)));
    // 0x1c63c0: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1C63C0u;
    {
        const bool branch_taken_0x1c63c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c63c0) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C63C8u;
    // 0x1c63c8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1c63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1c63cc: 0xa6c306b8  sh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c63ccu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c63d0: 0x86c306b6  lh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c63d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1718)));
    // 0x1c63d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c63d8: 0xa6c306b6  sh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c63d8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c63dc: 0x86c306b6  lh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c63dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1718)));
    // 0x1c63e0: 0x1c60008c  bgtz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C63E0u;
    {
        const bool branch_taken_0x1c63e0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C63E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63E0u;
            // 0x1c63e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63e0) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C63E8u;
    // 0x1c63e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c63e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c63ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c63f0:
    // 0x1c63f0: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x1c63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x1c63f4: 0xc4610520  lwc1        $f1, 0x520($v1)
    ctx->pc = 0x1c63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c63f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c63f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c63fc: 0x0  nop
    ctx->pc = 0x1c63fcu;
    // NOP
    // 0x1c6400: 0x45000080  bc1f        . + 4 + (0x80 << 2)
    ctx->pc = 0x1C6400u;
    {
        const bool branch_taken_0x1c6400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6400) {
            ctx->pc = 0x1C6604u;
            goto label_1c6604;
        }
    }
    ctx->pc = 0x1C6408u;
    // 0x1c6408: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6408u;
    SET_GPR_U32(ctx, 31, 0x1C6410u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6410u; }
        if (ctx->pc != 0x1C6410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6410u; }
        if (ctx->pc != 0x1C6410u) { return; }
    }
    ctx->pc = 0x1C6410u;
label_1c6410:
    // 0x1c6410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6414: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1c6414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6418: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c641c: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6424: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c6424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c6428: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c6428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c642c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c642cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6430: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1c6430u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6434: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6438: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c643c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c643cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c6440: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6444: 0x0  nop
    ctx->pc = 0x1c6444u;
    // NOP
    // 0x1c6448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c644c: 0xe4600420  swc1        $f0, 0x420($v1)
    ctx->pc = 0x1c644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1056), bits); }
    // 0x1c6450: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6450u;
    SET_GPR_U32(ctx, 31, 0x1C6458u);
    ctx->pc = 0x1C6454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6450u;
            // 0x1c6454: 0xac6204a0  sw          $v0, 0x4A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6458u; }
        if (ctx->pc != 0x1C6458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6458u; }
        if (ctx->pc != 0x1C6458u) { return; }
    }
    ctx->pc = 0x1C6458u;
label_1c6458:
    // 0x1c6458: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c645c: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1c6460: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c6460u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6464: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c6468: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c6468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c646c: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x1c646cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c6470: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c6470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6474: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x1c6474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c6478: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c6478u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c647c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c647cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6480: 0x0  nop
    ctx->pc = 0x1c6480u;
    // NOP
    // 0x1c6484: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c6484u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c6488: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c6488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c648c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c648cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6490: 0x0  nop
    ctx->pc = 0x1c6490u;
    // NOP
    // 0x1c6494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6498: 0xe4600520  swc1        $f0, 0x520($v1)
    ctx->pc = 0x1c6498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1312), bits); }
    // 0x1c649c: 0xa44006ba  sh          $zero, 0x6BA($v0)
    ctx->pc = 0x1c649cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c64a0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C64A0u;
    SET_GPR_U32(ctx, 31, 0x1C64A8u);
    ctx->pc = 0x1C64A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64A0u;
            // 0x1c64a4: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64A8u; }
        if (ctx->pc != 0x1C64A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64A8u; }
        if (ctx->pc != 0x1C64A8u) { return; }
    }
    ctx->pc = 0x1C64A8u;
label_1c64a8:
    // 0x1c64a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c64a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c64ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c64acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c64b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c64b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c64b4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1c64b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c64b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c64b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c64bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c64c0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c64c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c64c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c64c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c64c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c64c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c64cc: 0x0  nop
    ctx->pc = 0x1c64ccu;
    // NOP
    // 0x1c64d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c64d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c64d4: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c64d8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c64d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c64dc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1c64dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1c64e0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C64E0u;
    SET_GPR_U32(ctx, 31, 0x1C64E8u);
    ctx->pc = 0x1C64E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64E0u;
            // 0x1c64e4: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E8u; }
        if (ctx->pc != 0x1C64E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E8u; }
        if (ctx->pc != 0x1C64E8u) { return; }
    }
    ctx->pc = 0x1C64E8u;
label_1c64e8:
    // 0x1c64e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c64e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c64ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c64f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c64f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c64f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c64f8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c64f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c64fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c64fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6500: 0x0  nop
    ctx->pc = 0x1c6500u;
    // NOP
    // 0x1c6504: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c6504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6508: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x1c6508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c650c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c650cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6510: 0x0  nop
    ctx->pc = 0x1c6510u;
    // NOP
    // 0x1c6514: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1c6514u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1c6518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c651c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1c651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1c6520: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6520u;
    SET_GPR_U32(ctx, 31, 0x1C6528u);
    ctx->pc = 0x1C6524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6520u;
            // 0x1c6524: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6528u; }
        if (ctx->pc != 0x1C6528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6528u; }
        if (ctx->pc != 0x1C6528u) { return; }
    }
    ctx->pc = 0x1C6528u;
label_1c6528:
    // 0x1c6528: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c6528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c652c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6530: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6534: 0x2162021  addu        $a0, $s0, $s6
    ctx->pc = 0x1c6534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c6538: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c6538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c653c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c653cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6540: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c6540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c6544: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c6544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c6548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c654c: 0x0  nop
    ctx->pc = 0x1c654cu;
    // NOP
    // 0x1c6550: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c6550u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6554: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c6554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6558: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c6558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c655c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1c655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1c6560: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6560u;
    SET_GPR_U32(ctx, 31, 0x1C6568u);
    ctx->pc = 0x1C6564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6560u;
            // 0x1c6564: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6568u; }
        if (ctx->pc != 0x1C6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6568u; }
        if (ctx->pc != 0x1C6568u) { return; }
    }
    ctx->pc = 0x1C6568u;
label_1c6568:
    // 0x1c6568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c656c: 0x0  nop
    ctx->pc = 0x1c656cu;
    // NOP
    // 0x1c6570: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6574: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c6574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c6578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c657c: 0x0  nop
    ctx->pc = 0x1c657cu;
    // NOP
    // 0x1c6580: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6584: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c658c: 0x0  nop
    ctx->pc = 0x1c658cu;
    // NOP
    // 0x1c6590: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6590u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6594: 0x0  nop
    ctx->pc = 0x1c6594u;
    // NOP
    // 0x1c6598: 0x0  nop
    ctx->pc = 0x1c6598u;
    // NOP
    // 0x1c659c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C659Cu;
    SET_GPR_U32(ctx, 31, 0x1C65A4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65A4u; }
        if (ctx->pc != 0x1C65A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65A4u; }
        if (ctx->pc != 0x1C65A4u) { return; }
    }
    ctx->pc = 0x1C65A4u;
label_1c65a4:
    // 0x1c65a4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1c65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c65a8: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c65ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c65b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c65b4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C65B4u;
    SET_GPR_U32(ctx, 31, 0x1C65BCu);
    ctx->pc = 0x1C65B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65B4u;
            // 0x1c65b8: 0xa46206fa  sh          $v0, 0x6FA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1786), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65BCu; }
        if (ctx->pc != 0x1C65BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65BCu; }
        if (ctx->pc != 0x1C65BCu) { return; }
    }
    ctx->pc = 0x1C65BCu;
label_1c65bc:
    // 0x1c65bc: 0x86c306b4  lh          $v1, 0x6B4($s6)
    ctx->pc = 0x1c65bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1716)));
    // 0x1c65c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c65c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c65c4: 0x0  nop
    ctx->pc = 0x1c65c4u;
    // NOP
    // 0x1c65c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c65c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c65cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c65d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c65d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c65d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c65d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c65d8: 0x0  nop
    ctx->pc = 0x1c65d8u;
    // NOP
    // 0x1c65dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c65dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c65e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c65e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c65e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c65e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c65e8: 0x0  nop
    ctx->pc = 0x1c65e8u;
    // NOP
    // 0x1c65ec: 0x0  nop
    ctx->pc = 0x1c65ecu;
    // NOP
    // 0x1c65f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C65F0u;
    SET_GPR_U32(ctx, 31, 0x1C65F8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65F8u; }
        if (ctx->pc != 0x1C65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65F8u; }
        if (ctx->pc != 0x1C65F8u) { return; }
    }
    ctx->pc = 0x1C65F8u;
label_1c65f8:
    // 0x1c65f8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c65fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C65FCu;
    {
        const bool branch_taken_0x1c65fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65FCu;
            // 0x1c6600: 0xa6c306b6  sh          $v1, 0x6B6($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65fc) {
            ctx->pc = 0x1C6614u;
            goto label_1c6614;
        }
    }
    ctx->pc = 0x1C6604u;
label_1c6604:
    // 0x1c6604: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c6604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c6608: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c6608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c660c: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1C660Cu;
    {
        const bool branch_taken_0x1c660c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C660Cu;
            // 0x1c6610: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c660c) {
            ctx->pc = 0x1C63F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c63f0;
        }
    }
    ctx->pc = 0x1C6614u;
label_1c6614:
    // 0x1c6614: 0x0  nop
    ctx->pc = 0x1c6614u;
    // NOP
    // 0x1c6618: 0x2ae30020  slti        $v1, $s7, 0x20
    ctx->pc = 0x1c6618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c661c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C661Cu;
    {
        const bool branch_taken_0x1c661c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c661c) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C6624u;
    // 0x1c6624: 0xa6c005ac  sh          $zero, 0x5AC($s6)
    ctx->pc = 0x1c6624u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1452), (uint16_t)GPR_U32(ctx, 0));
label_1c6628:
    // 0x1c6628: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c662c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6630: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c6630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c6634: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c6634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6638: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c6638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c663c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c663cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6640: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c6640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6644: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c6644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6648: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c6648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c664c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c664cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6650: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6650u;
            // 0x1c6654: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6658u;
}
