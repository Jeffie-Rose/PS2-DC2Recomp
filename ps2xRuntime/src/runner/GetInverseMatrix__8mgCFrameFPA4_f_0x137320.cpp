#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInverseMatrix__8mgCFrameFPA4_f
// Address: 0x137320 - 0x13758c
void GetInverseMatrix__8mgCFrameFPA4_f_0x137320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInverseMatrix__8mgCFrameFPA4_f_0x137320");
#endif

    switch (ctx->pc) {
        case 0x13735cu: goto label_13735c;
        case 0x1373f4u: goto label_1373f4;
        case 0x13750cu: goto label_13750c;
        case 0x13751cu: goto label_13751c;
        case 0x13752cu: goto label_13752c;
        case 0x13753cu: goto label_13753c;
        case 0x137550u: goto label_137550;
        default: break;
    }

    ctx->pc = 0x137320u;

    // 0x137320: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x137324: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x137324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x137328: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x137328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x13732c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x137330: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x137330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x137334: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x137334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x137338: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x137338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13733c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x137340: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x137340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x137344: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x137344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x137348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13734c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13734cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137350: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x137354: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x137354u;
    SET_GPR_U32(ctx, 31, 0x13735Cu);
    ctx->pc = 0x137358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137354u;
            // 0x137358: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13735Cu; }
        if (ctx->pc != 0x13735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13735Cu; }
        if (ctx->pc != 0x13735Cu) { return; }
    }
    ctx->pc = 0x13735Cu;
label_13735c:
    // 0x13735c: 0x27b200c4  addiu       $s2, $sp, 0xC4
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x137360: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x137364: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x137364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137368: 0x27b700c8  addiu       $s7, $sp, 0xC8
    ctx->pc = 0x137368u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13736c: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x13736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x137370: 0x27b500b4  addiu       $s5, $sp, 0xB4
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x137374: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x137374u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x137378: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13737c: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x13737cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x137380: 0x27b600b8  addiu       $s6, $sp, 0xB8
    ctx->pc = 0x137380u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x137384: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x137384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13738c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13738cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x137390: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x137390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137394: 0x46071002  mul.s       $f0, $f2, $f7
    ctx->pc = 0x137394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x137398: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x137398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x13739c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13739cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1373a0: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x1373a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1373a4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1373a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1373a8: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x1373a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1373ac: 0xc6890000  lwc1        $f9, 0x0($s4)
    ctx->pc = 0x1373acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1373b0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1373b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1373b4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x1373b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1373b8: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x1373b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1373bc: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1373bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1373c0: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x1373c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1373c4: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1373c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1373c8: 0xc6c80000  lwc1        $f8, 0x0($s6)
    ctx->pc = 0x1373c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1373cc: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1373ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1373d0: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x1373d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x1373d4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1373d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1373d8: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x1373d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x1373dc: 0x46074002  mul.s       $f0, $f8, $f7
    ctx->pc = 0x1373dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1373e0: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x1373e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1373e4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x1373e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1373e8: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x1373e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x1373ec: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x1373ECu;
    SET_GPR_U32(ctx, 31, 0x1373F4u);
    ctx->pc = 0x1373F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1373ECu;
            // 0x1373f0: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1373F4u; }
        if (ctx->pc != 0x1373F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1373F4u; }
        if (ctx->pc != 0x1373F4u) { return; }
    }
    ctx->pc = 0x1373F4u;
label_1373f4:
    // 0x1373f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1373f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1373f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1373f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1373fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137404: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x137404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137408: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x137408u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x13740c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x13740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137410: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x137410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137414: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x137414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137418: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13741c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x13741cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x137420: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x137420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x137424: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x137424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x137428: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x137428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13742c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x13742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137430: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x137430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137434: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x137434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137438: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x137438u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x13743c: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x13743cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x137440: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x137440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x137444: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x137444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137448: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x137448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13744c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x13744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137450: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137454: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x137454u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x137458: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x137458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x13745c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x13745cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x137460: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x137460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137464: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x137464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137468: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x137468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13746c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x13746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137470: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x137470u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x137474: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x137474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x137478: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x137478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x13747c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x13747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137480: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x137480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137484: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x137484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137488: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x137488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13748c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x13748cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x137490: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x137490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x137494: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x137494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x137498: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x137498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13749c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x13749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1374a0: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x1374a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1374a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1374a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374a8: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1374a8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1374ac: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1374acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1374b0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1374b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1374b4: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1374b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1374b8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x1374b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1374bc: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1374bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1374c0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1374c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374c4: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1374c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1374c8: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1374c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1374cc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1374ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1374d0: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x1374d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1374d4: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1374d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1374d8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1374d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374dc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1374dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1374e0: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1374e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1374e4: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1374e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1374e8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1374e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1374ec: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1374ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1374f0: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1374f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1374f4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x1374f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1374f8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1374f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374fc: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1374fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x137500: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x137500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x137504: 0xc041c4a  jal         func_107128
    ctx->pc = 0x137504u;
    SET_GPR_U32(ctx, 31, 0x13750Cu);
    ctx->pc = 0x137508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137504u;
            // 0x137508: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13750Cu; }
        if (ctx->pc != 0x13750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13750Cu; }
        if (ctx->pc != 0x13750Cu) { return; }
    }
    ctx->pc = 0x13750Cu;
label_13750c:
    // 0x13750c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x13750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x137510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137514: 0xc041c4a  jal         func_107128
    ctx->pc = 0x137514u;
    SET_GPR_U32(ctx, 31, 0x13751Cu);
    ctx->pc = 0x137518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137514u;
            // 0x137518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13751Cu; }
        if (ctx->pc != 0x13751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13751Cu; }
        if (ctx->pc != 0x13751Cu) { return; }
    }
    ctx->pc = 0x13751Cu;
label_13751c:
    // 0x13751c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x13751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x137520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137524: 0xc041c4a  jal         func_107128
    ctx->pc = 0x137524u;
    SET_GPR_U32(ctx, 31, 0x13752Cu);
    ctx->pc = 0x137528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137524u;
            // 0x137528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13752Cu; }
        if (ctx->pc != 0x13752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13752Cu; }
        if (ctx->pc != 0x13752Cu) { return; }
    }
    ctx->pc = 0x13752Cu;
label_13752c:
    // 0x13752c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x13752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x137530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137534: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x137534u;
    SET_GPR_U32(ctx, 31, 0x13753Cu);
    ctx->pc = 0x137538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137534u;
            // 0x137538: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13753Cu; }
        if (ctx->pc != 0x13753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13753Cu; }
        if (ctx->pc != 0x13753Cu) { return; }
    }
    ctx->pc = 0x13753Cu;
label_13753c:
    // 0x13753c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13753cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x137540: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x137540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x137544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x137544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x137548: 0xc041e96  jal         func_107A58
    ctx->pc = 0x137548u;
    SET_GPR_U32(ctx, 31, 0x137550u);
    ctx->pc = 0x13754Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137548u;
            // 0x13754c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137550u; }
        if (ctx->pc != 0x137550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137550u; }
        if (ctx->pc != 0x137550u) { return; }
    }
    ctx->pc = 0x137550u;
label_137550:
    // 0x137550: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x137550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x137554: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x137554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x137558: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x137558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13755c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137560: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x137560u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137564: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x137564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137568: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x137568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13756c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13756cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137570: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x137570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137574: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x137574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137578: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x137578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13757c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13757cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137584: 0x3e00008  jr          $ra
    ctx->pc = 0x137584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137584u;
            // 0x137588: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13758Cu;
}
