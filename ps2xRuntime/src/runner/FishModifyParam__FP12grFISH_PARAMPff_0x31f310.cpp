#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishModifyParam__FP12grFISH_PARAMPff
// Address: 0x31f310 - 0x31fa88
void FishModifyParam__FP12grFISH_PARAMPff_0x31f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishModifyParam__FP12grFISH_PARAMPff_0x31f310");
#endif

    switch (ctx->pc) {
        case 0x31f384u: goto label_31f384;
        case 0x31f468u: goto label_31f468;
        case 0x31f484u: goto label_31f484;
        case 0x31f59cu: goto label_31f59c;
        case 0x31f5ecu: goto label_31f5ec;
        case 0x31f680u: goto label_31f680;
        case 0x31f688u: goto label_31f688;
        case 0x31f744u: goto label_31f744;
        case 0x31f74cu: goto label_31f74c;
        case 0x31f7b8u: goto label_31f7b8;
        case 0x31f804u: goto label_31f804;
        case 0x31f860u: goto label_31f860;
        case 0x31f8b8u: goto label_31f8b8;
        case 0x31f950u: goto label_31f950;
        case 0x31f97cu: goto label_31f97c;
        case 0x31fa08u: goto label_31fa08;
        case 0x31fa3cu: goto label_31fa3c;
        default: break;
    }

    ctx->pc = 0x31f310u;

    // 0x31f310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31f314: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31f318: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x31f31c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31f31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31f320: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31f320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31f324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31f324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31f32c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31f32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31f334: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31f334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31f338: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x31f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f33c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f340: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x31f340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x31f344: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x31f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f34c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x31f34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x31f350: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x31f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f358: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x31f358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x31f35c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x31f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f364: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x31f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x31f368: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x31f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f36c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f370: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x31f370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x31f374: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x31f374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x31f378: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x31f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31f37c: 0xc0c80e4  jal         func_320390
    ctx->pc = 0x31F37Cu;
    SET_GPR_U32(ctx, 31, 0x31F384u);
    ctx->pc = 0x31F380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F37Cu;
            // 0x31f380: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x320390u;
    if (runtime->hasFunction(0x320390u)) {
        auto targetFn = runtime->lookupFunction(0x320390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F384u; }
        if (ctx->pc != 0x31F384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishData__Fi_0x320390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F384u; }
        if (ctx->pc != 0x31F384u) { return; }
    }
    ctx->pc = 0x31F384u;
label_31f384:
    // 0x31f384: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x31F384u;
    {
        const bool branch_taken_0x31f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F384u;
            // 0x31f388: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f384) {
            ctx->pc = 0x31F458u;
            goto label_31f458;
        }
    }
    ctx->pc = 0x31F38Cu;
    // 0x31f38c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f390: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31f390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31f394: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31f394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f398: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x31f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f39c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x31f39cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31f3a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f3a4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x31f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x31f3a8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x31f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f3ac: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x31f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f3b0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x31f3b0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31f3b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f3b8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x31f3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f3bc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x31f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f3c0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x31f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f3c4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x31f3c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31f3c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f3c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f3cc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x31f3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f3d0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x31f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f3d4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x31f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f3d8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x31f3d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31f3dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f3e0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x31f3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x31f3e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f3e8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x31f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f3ec: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x31f3ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31f3f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f3f4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x31f3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x31f3f8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x31f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x31f3fc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x31f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x31f400: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31F400u;
    {
        const bool branch_taken_0x31f400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31f400) {
            ctx->pc = 0x31F454u;
            goto label_31f454;
        }
    }
    ctx->pc = 0x31F408u;
    // 0x31f408: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x31f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f40c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x31f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x31f410: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31f414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f418: 0x0  nop
    ctx->pc = 0x31f418u;
    // NOP
    // 0x31f41c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f420: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x31f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x31f424: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x31f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f428: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f42c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x31f42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f430: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x31f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f438: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x31f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f43c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x31f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f444: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x31f444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x31f448: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x31f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f44c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f450: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x31f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_31f454:
    // 0x31f454: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31f454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f458:
    // 0x31f458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f45c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31f45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f460: 0xc04a422  jal         func_129088
    ctx->pc = 0x31F460u;
    SET_GPR_U32(ctx, 31, 0x31F468u);
    ctx->pc = 0x31F464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F460u;
            // 0x31f464: 0xafb0007c  sw          $s0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F468u; }
        if (ctx->pc != 0x31F468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F468u; }
        if (ctx->pc != 0x31F468u) { return; }
    }
    ctx->pc = 0x31F468u;
label_31f468:
    // 0x31f468: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x31f468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f46c: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x31F46Cu;
    {
        const bool branch_taken_0x31f46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F46Cu;
            // 0x31f470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f46c) {
            ctx->pc = 0x31F5CCu;
            goto label_31f5cc;
        }
    }
    ctx->pc = 0x31F474u;
    // 0x31f474: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x31f474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31f478: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x31F478u;
    {
        const bool branch_taken_0x31f478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F478u;
            // 0x31f47c: 0x2445fff8  addiu       $a1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f478) {
            ctx->pc = 0x31F590u;
            goto label_31f590;
        }
    }
    ctx->pc = 0x31F480u;
    // 0x31f480: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x31f480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_31f484:
    // 0x31f484: 0x2647021  addu        $t6, $s3, $a0
    ctx->pc = 0x31f484u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x31f488: 0x81c70000  lb          $a3, 0x0($t6)
    ctx->pc = 0x31f488u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x31f48c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31f490: 0x81cd0001  lb          $t5, 0x1($t6)
    ctx->pc = 0x31f490u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x31f494: 0x85302a  slt         $a2, $a0, $a1
    ctx->pc = 0x31f494u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31f498: 0x81cc0002  lb          $t4, 0x2($t6)
    ctx->pc = 0x31f498u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x31f49c: 0x81cb0003  lb          $t3, 0x3($t6)
    ctx->pc = 0x31f49cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x31f4a0: 0x81ca0004  lb          $t2, 0x4($t6)
    ctx->pc = 0x31f4a0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x31f4a4: 0x81c90005  lb          $t1, 0x5($t6)
    ctx->pc = 0x31f4a4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x31f4a8: 0x2273804  sllv        $a3, $a3, $s1
    ctx->pc = 0x31f4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f4ac: 0x81c80006  lb          $t0, 0x6($t6)
    ctx->pc = 0x31f4acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x31f4b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f4b4: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x31f4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x31f4b8: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f4b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f4bc: 0x81c70007  lb          $a3, 0x7($t6)
    ctx->pc = 0x31f4bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 7)));
    // 0x31f4c0: 0x0  nop
    ctx->pc = 0x31f4c0u;
    // NOP
    // 0x31f4c4: 0x8810  mfhi        $s1
    ctx->pc = 0x31f4c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f4c8: 0x22d6804  sllv        $t5, $t5, $s1
    ctx->pc = 0x31f4c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f4cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f4d0: 0x20d8021  addu        $s0, $s0, $t5
    ctx->pc = 0x31f4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x31f4d4: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f4d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f4d8: 0x0  nop
    ctx->pc = 0x31f4d8u;
    // NOP
    // 0x31f4dc: 0x0  nop
    ctx->pc = 0x31f4dcu;
    // NOP
    // 0x31f4e0: 0x8810  mfhi        $s1
    ctx->pc = 0x31f4e0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f4e4: 0x22c6004  sllv        $t4, $t4, $s1
    ctx->pc = 0x31f4e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f4e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f4ec: 0x20c8021  addu        $s0, $s0, $t4
    ctx->pc = 0x31f4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x31f4f0: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f4f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f4f4: 0x0  nop
    ctx->pc = 0x31f4f4u;
    // NOP
    // 0x31f4f8: 0x0  nop
    ctx->pc = 0x31f4f8u;
    // NOP
    // 0x31f4fc: 0x8810  mfhi        $s1
    ctx->pc = 0x31f4fcu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f500: 0x22b5804  sllv        $t3, $t3, $s1
    ctx->pc = 0x31f500u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f504: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f508: 0x20b8021  addu        $s0, $s0, $t3
    ctx->pc = 0x31f508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    // 0x31f50c: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f50cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f510: 0x0  nop
    ctx->pc = 0x31f510u;
    // NOP
    // 0x31f514: 0x0  nop
    ctx->pc = 0x31f514u;
    // NOP
    // 0x31f518: 0x8810  mfhi        $s1
    ctx->pc = 0x31f518u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f51c: 0x22a5004  sllv        $t2, $t2, $s1
    ctx->pc = 0x31f51cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f520: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f524: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x31f524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x31f528: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f528u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f52c: 0x0  nop
    ctx->pc = 0x31f52cu;
    // NOP
    // 0x31f530: 0x0  nop
    ctx->pc = 0x31f530u;
    // NOP
    // 0x31f534: 0x8810  mfhi        $s1
    ctx->pc = 0x31f534u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f538: 0x2294804  sllv        $t1, $t1, $s1
    ctx->pc = 0x31f538u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f53c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f540: 0x2098021  addu        $s0, $s0, $t1
    ctx->pc = 0x31f540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x31f544: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f544u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f548: 0x0  nop
    ctx->pc = 0x31f548u;
    // NOP
    // 0x31f54c: 0x0  nop
    ctx->pc = 0x31f54cu;
    // NOP
    // 0x31f550: 0x8810  mfhi        $s1
    ctx->pc = 0x31f550u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f554: 0x2284004  sllv        $t0, $t0, $s1
    ctx->pc = 0x31f554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f558: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f55c: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x31f560: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f560u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f564: 0x0  nop
    ctx->pc = 0x31f564u;
    // NOP
    // 0x31f568: 0x0  nop
    ctx->pc = 0x31f568u;
    // NOP
    // 0x31f56c: 0x8810  mfhi        $s1
    ctx->pc = 0x31f56cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f570: 0x2273804  sllv        $a3, $a3, $s1
    ctx->pc = 0x31f570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f574: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f578: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x31f578u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f57c: 0x0  nop
    ctx->pc = 0x31f57cu;
    // NOP
    // 0x31f580: 0x0  nop
    ctx->pc = 0x31f580u;
    // NOP
    // 0x31f584: 0x8810  mfhi        $s1
    ctx->pc = 0x31f584u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f588: 0x14c0ffbe  bnez        $a2, . + 4 + (-0x42 << 2)
    ctx->pc = 0x31F588u;
    {
        const bool branch_taken_0x31f588 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F588u;
            // 0x31f58c: 0x2078021  addu        $s0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f588) {
            ctx->pc = 0x31F484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f484;
        }
    }
    ctx->pc = 0x31F590u;
label_31f590:
    // 0x31f590: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x31f590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f594: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x31F594u;
    {
        const bool branch_taken_0x31f594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F594u;
            // 0x31f598: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f594) {
            ctx->pc = 0x31F5CCu;
            goto label_31f5cc;
        }
    }
    ctx->pc = 0x31F59Cu;
label_31f59c:
    // 0x31f59c: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x31f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x31f5a0: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x31f5a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f5a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31f5a8: 0x2263004  sllv        $a2, $a2, $s1
    ctx->pc = 0x31f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f5ac: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x31f5acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31f5b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x31f5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31f5b4: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x31f5b4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31f5b8: 0x0  nop
    ctx->pc = 0x31f5b8u;
    // NOP
    // 0x31f5bc: 0x0  nop
    ctx->pc = 0x31f5bcu;
    // NOP
    // 0x31f5c0: 0x8810  mfhi        $s1
    ctx->pc = 0x31f5c0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31f5c4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x31F5C4u;
    {
        const bool branch_taken_0x31f5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F5C4u;
            // 0x31f5c8: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f5c4) {
            ctx->pc = 0x31F59Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f59c;
        }
    }
    ctx->pc = 0x31F5CCu;
label_31f5cc:
    // 0x31f5cc: 0x0  nop
    ctx->pc = 0x31f5ccu;
    // NOP
    // 0x31f5d0: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31F5D0u;
    {
        const bool branch_taken_0x31f5d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f5d0) {
            ctx->pc = 0x31F5DCu;
            goto label_31f5dc;
        }
    }
    ctx->pc = 0x31F5D8u;
    // 0x31f5d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31f5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f5dc:
    // 0x31f5dc: 0xafb0007c  sw          $s0, 0x7C($sp)
    ctx->pc = 0x31f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 16));
    // 0x31f5e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31f5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5e4: 0x3c025d58  lui         $v0, 0x5D58
    ctx->pc = 0x31f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23896 << 16));
    // 0x31f5e8: 0x34428b65  ori         $v0, $v0, 0x8B65
    ctx->pc = 0x31f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35685);
label_31f5ec:
    // 0x31f5ec: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f5f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x31f5f4: 0x286403e8  slti        $a0, $v1, 0x3E8
    ctx->pc = 0x31f5f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x31f5f8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x31f5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f5fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f600: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f604: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f608: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x31f608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f60c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f610: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f614: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f618: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x31f618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f61c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f620: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f624: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f628: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x31f628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f62c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f630: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f634: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f638: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x31f638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f63c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f640: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f644: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f648: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x31f648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f64c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f650: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f654: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f658: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x31f658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f65c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f660: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x31f660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x31f664: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x31f664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31f668: 0x70a22818  mult1       $a1, $a1, $v0
    ctx->pc = 0x31f668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31f66c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31f670: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31F670u;
    {
        const bool branch_taken_0x31f670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F670u;
            // 0x31f674: 0xafa5007c  sw          $a1, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f670) {
            ctx->pc = 0x31F5ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f5ec;
        }
    }
    ctx->pc = 0x31F678u;
    // 0x31f678: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31f678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f67c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31f67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f680:
    // 0x31f680: 0xc0c7514  jal         func_31D450
    ctx->pc = 0x31F680u;
    SET_GPR_U32(ctx, 31, 0x31F688u);
    ctx->pc = 0x31F684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F680u;
            // 0x31f684: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D450u;
    if (runtime->hasFunction(0x31D450u)) {
        auto targetFn = runtime->lookupFunction(0x31D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F688u; }
        if (ctx->pc != 0x31F688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nget__7CRandomFv_0x31d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F688u; }
        if (ctx->pc != 0x31F688u) { return; }
    }
    ctx->pc = 0x31F688u;
label_31f688:
    // 0x31f688: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x31f688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x31f68c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31f690: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x31f690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x31f694: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31f698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31f698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f69c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31f69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f6a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f6a4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x31f6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x31f6a8: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x31f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31f6ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x31f6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x31f6b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31f6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f6b4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31F6B4u;
    {
        const bool branch_taken_0x31f6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F6B4u;
            // 0x31f6b8: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f6b4) {
            ctx->pc = 0x31F680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f680;
        }
    }
    ctx->pc = 0x31F6BCu;
    // 0x31f6bc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x31f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x31f6c0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31f6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f6c8: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x31f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f6cc: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x31f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f6d0: 0x3c0240c8  lui         $v0, 0x40C8
    ctx->pc = 0x31f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16584 << 16));
    // 0x31f6d4: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x31f6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x31f6d8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x31f6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31f6dc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x31f6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x31f6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f6e4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x31f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f6e8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x31f6e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x31f6ec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x31f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f6f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31f6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31f6f4: 0x0  nop
    ctx->pc = 0x31f6f4u;
    // NOP
    // 0x31f6f8: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x31f6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f6fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31f6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31f700: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x31f700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f704: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x31f704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f708: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x31f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f70c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f710: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x31f710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f714: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x31f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f718: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x31f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f71c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f720: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x31f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x31f724: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x31f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f728: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x31f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f72c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f730: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F730u;
    {
        const bool branch_taken_0x31f730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F730u;
            // 0x31f734: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f730) {
            ctx->pc = 0x31F73Cu;
            goto label_31f73c;
        }
    }
    ctx->pc = 0x31F738u;
    // 0x31f738: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x31f738u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
label_31f73c:
    // 0x31f73c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31f73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f740: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31f740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f744:
    // 0x31f744: 0xc0c817c  jal         func_3205F0
    ctx->pc = 0x31F744u;
    SET_GPR_U32(ctx, 31, 0x31F74Cu);
    ctx->pc = 0x3205F0u;
    if (runtime->hasFunction(0x3205F0u)) {
        auto targetFn = runtime->lookupFunction(0x3205F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F74Cu; }
        if (ctx->pc != 0x31F74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nrnd__Fv_0x3205f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F74Cu; }
        if (ctx->pc != 0x31F74Cu) { return; }
    }
    ctx->pc = 0x31F74Cu;
label_31f74c:
    // 0x31f74c: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x31f74cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x31f750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31f750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f754: 0x0  nop
    ctx->pc = 0x31f754u;
    // NOP
    // 0x31f758: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x31f758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f75c: 0x0  nop
    ctx->pc = 0x31f75cu;
    // NOP
    // 0x31f760: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F760u;
    {
        const bool branch_taken_0x31f760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f760) {
            ctx->pc = 0x31F76Cu;
            goto label_31f76c;
        }
    }
    ctx->pc = 0x31F768u;
    // 0x31f768: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x31f768u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_31f76c:
    // 0x31f76c: 0x0  nop
    ctx->pc = 0x31f76cu;
    // NOP
    // 0x31f770: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x31f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x31f774: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x31f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31f778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f77c: 0x0  nop
    ctx->pc = 0x31f77cu;
    // NOP
    // 0x31f780: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31f780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31f784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31f784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f788: 0x0  nop
    ctx->pc = 0x31f788u;
    // NOP
    // 0x31f78c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31F78Cu;
    {
        const bool branch_taken_0x31f78c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F78Cu;
            // 0x31f790: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f78c) {
            ctx->pc = 0x31F798u;
            goto label_31f798;
        }
    }
    ctx->pc = 0x31F794u;
    // 0x31f794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x31f794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_31f798:
    // 0x31f798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31f79c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x31f79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31f7a0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x31F7A0u;
    {
        const bool branch_taken_0x31f7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7A0u;
            // 0x31f7a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7a0) {
            ctx->pc = 0x31F744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31f744;
        }
    }
    ctx->pc = 0x31F7A8u;
    // 0x31f7a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31f7ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f7b0: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31F7B0u;
    SET_GPR_U32(ctx, 31, 0x31F7B8u);
    ctx->pc = 0x31F7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7B0u;
            // 0x31f7b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7B8u; }
        if (ctx->pc != 0x31F7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F7B8u; }
        if (ctx->pc != 0x31F7B8u) { return; }
    }
    ctx->pc = 0x31F7B8u;
label_31f7b8:
    // 0x31f7b8: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x31f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x31f7bc: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x31f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x31f7c0: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x31f7c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x31f7c4: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x31F7C4u;
    {
        const bool branch_taken_0x31f7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F7C4u;
            // 0x31f7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7c4) {
            ctx->pc = 0x31FA34u;
            goto label_31fa34;
        }
    }
    ctx->pc = 0x31F7CCu;
    // 0x31f7cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31f7d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f7d4: 0x24843010  addiu       $a0, $a0, 0x3010
    ctx->pc = 0x31f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12304));
    // 0x31f7d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f7dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f7e0: 0x600008  jr          $v1
    ctx->pc = 0x31F7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31F7E8u: goto label_31f7e8;
            case 0x31F844u: goto label_31f844;
            case 0x31F888u: goto label_31f888;
            case 0x31F8F8u: goto label_31f8f8;
            case 0x31F960u: goto label_31f960;
            case 0x31F9BCu: goto label_31f9bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x31F7E8u;
label_31f7e8:
    // 0x31f7e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x31f7ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31f7f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f7f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31f7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f7f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31f7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f7fc: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31F7FCu;
    SET_GPR_U32(ctx, 31, 0x31F804u);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F804u; }
        if (ctx->pc != 0x31F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F804u; }
        if (ctx->pc != 0x31F804u) { return; }
    }
    ctx->pc = 0x31F804u;
label_31f804:
    // 0x31f804: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x31f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f808: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31f808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x31f80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31f80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f810: 0x0  nop
    ctx->pc = 0x31f810u;
    // NOP
    // 0x31f814: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x31f814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31f818: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x31f818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x31f81c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x31f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f820: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f824: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x31f824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f828: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x31f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f82c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f82cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f830: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x31f830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f834: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x31f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f838: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f83c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x31F83Cu;
    {
        const bool branch_taken_0x31f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F83Cu;
            // 0x31f840: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f83c) {
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31F844u;
label_31f844:
    // 0x31f844: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x31f844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x31f848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31f84c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31f84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31f850: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x31f850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f858: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31F858u;
    SET_GPR_U32(ctx, 31, 0x31F860u);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F860u; }
        if (ctx->pc != 0x31F860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F860u; }
        if (ctx->pc != 0x31F860u) { return; }
    }
    ctx->pc = 0x31F860u;
label_31f860:
    // 0x31f860: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x31f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f864: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f868: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x31f868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f86c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x31f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f870: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f874: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x31f874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f878: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x31f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f87c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f880: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x31F880u;
    {
        const bool branch_taken_0x31f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F880u;
            // 0x31f884: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f880) {
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31F888u;
label_31f888:
    // 0x31f888: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x31f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f88c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31f890: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31f894: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x31f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x31f898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f89c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31f89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f8a0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31f8a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f8a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31f8a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31f8ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31f8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f8b0: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31F8B0u;
    SET_GPR_U32(ctx, 31, 0x31F8B8u);
    ctx->pc = 0x31F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F8B0u;
            // 0x31f8b4: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8B8u; }
        if (ctx->pc != 0x31F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F8B8u; }
        if (ctx->pc != 0x31F8B8u) { return; }
    }
    ctx->pc = 0x31F8B8u;
label_31f8b8:
    // 0x31f8b8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x31f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f8bc: 0x3c033f5f  lui         $v1, 0x3F5F
    ctx->pc = 0x31f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16223 << 16));
    // 0x31f8c0: 0x34647cee  ori         $a0, $v1, 0x7CEE
    ctx->pc = 0x31f8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31982);
    // 0x31f8c4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x31f8c8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x31f8c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f8cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31f8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f8d0: 0x0  nop
    ctx->pc = 0x31f8d0u;
    // NOP
    // 0x31f8d4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31f8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31f8d8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x31f8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f8dc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x31f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f8e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31f8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f8e4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x31f8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f8e8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x31f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f8ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f8f0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x31F8F0u;
    {
        const bool branch_taken_0x31f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F8F0u;
            // 0x31f8f4: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8f0) {
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31F8F8u;
label_31f8f8:
    // 0x31f8f8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x31f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f8fc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31f900: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x31f900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f908: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x31f908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x31f90c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f910: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31f910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f914: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31f914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f918: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x31f91c: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x31f91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31f920: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x31f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x31f924: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f928: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x31f928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x31f92c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x31f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f930: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31f930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31f934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f938: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31f938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f93c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x31f93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f940: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x31f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f944: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31f944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f948: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31F948u;
    SET_GPR_U32(ctx, 31, 0x31F950u);
    ctx->pc = 0x31F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F948u;
            // 0x31f94c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F950u; }
        if (ctx->pc != 0x31F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F950u; }
        if (ctx->pc != 0x31F950u) { return; }
    }
    ctx->pc = 0x31F950u;
label_31f950:
    // 0x31f950: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x31f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f958: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x31F958u;
    {
        const bool branch_taken_0x31f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F958u;
            // 0x31f95c: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f958) {
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31F960u;
label_31f960:
    // 0x31f960: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31f960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31f964: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31f964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31f968: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f96c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31f96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f970: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31f970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f974: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31F974u;
    SET_GPR_U32(ctx, 31, 0x31F97Cu);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F97Cu; }
        if (ctx->pc != 0x31F97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F97Cu; }
        if (ctx->pc != 0x31F97Cu) { return; }
    }
    ctx->pc = 0x31F97Cu;
label_31f97c:
    // 0x31f97c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x31f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f980: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31f980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x31f984: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31f984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f988: 0x0  nop
    ctx->pc = 0x31f988u;
    // NOP
    // 0x31f98c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x31f98cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x31f990: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x31f990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x31f994: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x31f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f998: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f99c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x31f99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31f9a0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x31f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9a8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x31f9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31f9ac: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x31f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9b4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31F9B4u;
    {
        const bool branch_taken_0x31f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F9B4u;
            // 0x31f9b8: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9b4) {
            ctx->pc = 0x31FA30u;
            goto label_31fa30;
        }
    }
    ctx->pc = 0x31F9BCu;
label_31f9bc:
    // 0x31f9bc: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x31f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9c0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x31f9c4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x31f9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f9c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f9cc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x31f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x31f9d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31f9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31f9d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31f9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f9d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31f9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f9dc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31f9e0: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x31f9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31f9e4: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x31f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x31f9e8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31f9ec: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x31f9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x31f9f0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x31f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9f4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x31f9f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f9f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f9fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31f9fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31fa00: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FA00u;
    SET_GPR_U32(ctx, 31, 0x31FA08u);
    ctx->pc = 0x31FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA00u;
            // 0x31fa04: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA08u; }
        if (ctx->pc != 0x31FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FA08u; }
        if (ctx->pc != 0x31FA08u) { return; }
    }
    ctx->pc = 0x31FA08u;
label_31fa08:
    // 0x31fa08: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x31fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fa0c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x31fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x31fa10: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x31fa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31fa14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31fa14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fa18: 0x0  nop
    ctx->pc = 0x31fa18u;
    // NOP
    // 0x31fa1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31fa1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31fa20: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x31fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x31fa24: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x31fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fa28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31fa28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31fa2c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x31fa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_31fa30:
    // 0x31fa30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31fa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fa34:
    // 0x31fa34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31fa38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31fa3c:
    // 0x31fa3c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x31fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x31fa40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fa44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31fa44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fa48: 0x0  nop
    ctx->pc = 0x31fa48u;
    // NOP
    // 0x31fa4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31FA4Cu;
    {
        const bool branch_taken_0x31fa4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fa4c) {
            ctx->pc = 0x31FA58u;
            goto label_31fa58;
        }
    }
    ctx->pc = 0x31FA54u;
    // 0x31fa54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x31fa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31fa58:
    // 0x31fa58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31fa5c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x31fa5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31fa60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x31FA60u;
    {
        const bool branch_taken_0x31fa60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA60u;
            // 0x31fa64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa60) {
            ctx->pc = 0x31FA3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fa3c;
        }
    }
    ctx->pc = 0x31FA68u;
    // 0x31fa68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31fa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31fa6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31fa70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31fa70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fa74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31fa74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fa78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31fa78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fa7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31fa7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fa80: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FA80u;
            // 0x31fa84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31FA88u;
}
