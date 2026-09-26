#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __kernel_tanf
// Address: 0x11d338 - 0x11d5cc
void ps2___kernel_tanf_0x11d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_tanf_0x11d338");
#endif

    switch (ctx->pc) {
        case 0x11d390u: goto label_11d390;
        default: break;
    }

    ctx->pc = 0x11d338u;

    // 0x11d338: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11d338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11d33c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d340: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11d340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d344: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11d344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11d348: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11d348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11d34c: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x11d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x11d350: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x11d350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11d354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d358: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11d358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11d35c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11D35Cu;
    {
        const bool branch_taken_0x11d35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D35Cu;
            // 0x11d360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d35c) {
            ctx->pc = 0x11D3DCu;
            goto label_11d3dc;
        }
    }
    ctx->pc = 0x11D364u;
    // 0x11d364: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11d368: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11d368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11d36c: 0x0  nop
    ctx->pc = 0x11d36cu;
    // NOP
    // 0x11d370: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11D370u;
    {
        const bool branch_taken_0x11d370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D370u;
            // 0x11d374: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d370) {
            ctx->pc = 0x11D3E0u;
            goto label_11d3e0;
        }
    }
    ctx->pc = 0x11D378u;
    // 0x11d378: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x11d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11d37c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x11d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11d380: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D380u;
    {
        const bool branch_taken_0x11d380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D380u;
            // 0x11d384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d380) {
            ctx->pc = 0x11D3B0u;
            goto label_11d3b0;
        }
    }
    ctx->pc = 0x11D388u;
    // 0x11d388: 0xc04799e  jal         func_11E678
    ctx->pc = 0x11D388u;
    SET_GPR_U32(ctx, 31, 0x11D390u);
    ctx->pc = 0x11E678u;
    if (runtime->hasFunction(0x11E678u)) {
        auto targetFn = runtime->lookupFunction(0x11E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D390u; }
        if (ctx->pc != 0x11D390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabsf_0x11e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D390u; }
        if (ctx->pc != 0x11D390u) { return; }
    }
    ctx->pc = 0x11D390u;
label_11d390:
    // 0x11d390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d398: 0x0  nop
    ctx->pc = 0x11d398u;
    // NOP
    // 0x11d39c: 0x0  nop
    ctx->pc = 0x11d39cu;
    // NOP
    // 0x11d3a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11d3a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x11d3a4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x11D3A4u;
    {
        const bool branch_taken_0x11d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3A4u;
            // 0x11d3a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3a4) {
            ctx->pc = 0x11D5C4u;
            goto label_11d5c4;
        }
    }
    ctx->pc = 0x11D3ACu;
    // 0x11d3ac: 0x0  nop
    ctx->pc = 0x11d3acu;
    // NOP
label_11d3b0:
    // 0x11d3b0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D3B0u;
    {
        const bool branch_taken_0x11d3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3B0u;
            // 0x11d3b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3b0) {
            ctx->pc = 0x11D3D4u;
            goto label_11d3d4;
        }
    }
    ctx->pc = 0x11D3B8u;
    // 0x11d3b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11d3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11d3bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d3c0: 0x0  nop
    ctx->pc = 0x11d3c0u;
    // NOP
    // 0x11d3c4: 0x0  nop
    ctx->pc = 0x11d3c4u;
    // NOP
    // 0x11d3c8: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x11d3c8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x11d3cc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x11D3CCu;
    {
        const bool branch_taken_0x11d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3cc) {
            ctx->pc = 0x11D5C4u;
            goto label_11d5c4;
        }
    }
    ctx->pc = 0x11D3D4u;
label_11d3d4:
    // 0x11d3d4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x11D3D4u;
    {
        const bool branch_taken_0x11d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3D4u;
            // 0x11d3d8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3d4) {
            ctx->pc = 0x11D5C0u;
            goto label_11d5c0;
        }
    }
    ctx->pc = 0x11D3DCu;
label_11d3dc:
    // 0x11d3dc: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x11d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_11d3e0:
    // 0x11d3e0: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x11d3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x11d3e4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11d3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11d3e8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D3E8u;
    {
        const bool branch_taken_0x11d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3e8) {
            ctx->pc = 0x11D3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D3E8u;
            // 0x11d3ec: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D42Cu;
            goto label_11d42c;
        }
    }
    ctx->pc = 0x11D3F0u;
    // 0x11d3f0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D3F0u;
    {
        const bool branch_taken_0x11d3f0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11d3f0) {
            ctx->pc = 0x11D400u;
            goto label_11d400;
        }
    }
    ctx->pc = 0x11D3F8u;
    // 0x11d3f8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x11d3f8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x11d3fc: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x11d3fcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_11d400:
    // 0x11d400: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x11d400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x11d404: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11d404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11d408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d40c: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x11d40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x11d410: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11d410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11d414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d418: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x11d418u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11d41c: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x11d41cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x11d420: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11d420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11d424: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x11d424u;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x11d428: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x11d428u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_11d42c:
    // 0x11d42c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11d430: 0x24621830  addiu       $v0, $v1, 0x1830
    ctx->pc = 0x11d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6192));
    // 0x11d434: 0xc4691830  lwc1        $f9, 0x1830($v1)
    ctx->pc = 0x11d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x11d438: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x11d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d43c: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x11d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x11d440: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x11d440u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x11d444: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x11d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d448: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x11d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11d44c: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x11d44cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x11d450: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x11d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11d454: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x11d458: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x11d458u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x11d45c: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x11d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11d460: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x11d460u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x11d464: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x11d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d468: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x11d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11d46c: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x11d46cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x11d470: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x11d470u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x11d474: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x11d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11d478: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x11d478u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x11d47c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x11d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11d480: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x11d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11d484: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x11d484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11d488: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x11d488u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x11d48c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x11d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x11d490: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x11d490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x11d494: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x11d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x11d498: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x11d498u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x11d49c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11d49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11d4a0: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x11d4a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x11d4a4: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x11d4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x11d4a8: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x11d4a8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x11d4ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11d4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11d4b0: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x11d4b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x11d4b4: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x11d4b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x11d4b8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x11d4b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x11d4bc: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x11d4bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x11d4c0: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x11d4c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x11d4c4: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x11d4c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x11d4c8: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x11d4c8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x11d4cc: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x11d4ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x11d4d0: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x11d4d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x11d4d4: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x11d4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x11d4d8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x11d4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x11d4dc: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x11d4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x11d4e0: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x11d4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11d4e4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x11d4e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x11d4e8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x11d4e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x11d4ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11D4ECu;
    {
        const bool branch_taken_0x11d4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D4ECu;
            // 0x11d4f0: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4ec) {
            ctx->pc = 0x11D540u;
            goto label_11d540;
        }
    }
    ctx->pc = 0x11D4F4u;
    // 0x11d4f4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x11d4f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11d4f8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x11d4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x11d4fc: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x11d4fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x11d500: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x11d500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x11d504: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x11d504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11d508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d50c: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x11d50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x11d510: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11d510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11d514: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11d514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d518: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11d518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11d51c: 0x0  nop
    ctx->pc = 0x11d51cu;
    // NOP
    // 0x11d520: 0x0  nop
    ctx->pc = 0x11d520u;
    // NOP
    // 0x11d524: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11d524u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11d528: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11d528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11d52c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11d52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11d530: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11d530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11d534: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x11d534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11d538: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11D538u;
    {
        const bool branch_taken_0x11d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D538u;
            // 0x11d53c: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d538) {
            ctx->pc = 0x11D5C0u;
            goto label_11d5c0;
        }
    }
    ctx->pc = 0x11D540u;
label_11d540:
    // 0x11d540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d544: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11D544u;
    {
        const bool branch_taken_0x11d544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D544u;
            // 0x11d548: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d544) {
            ctx->pc = 0x11D5C0u;
            goto label_11d5c0;
        }
    }
    ctx->pc = 0x11D54Cu;
    // 0x11d54c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x11d54cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11d550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11d550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d554: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11d558: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x11d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x11d55c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11d55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11d560: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x11d560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11d564: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x11d564u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x11d568: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11d568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11d56c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d570: 0x0  nop
    ctx->pc = 0x11d570u;
    // NOP
    // 0x11d574: 0x0  nop
    ctx->pc = 0x11d574u;
    // NOP
    // 0x11d578: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x11d578u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x11d57c: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x11d57cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x11d580: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x11d580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11d584: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11d584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d588: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11d588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11d58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11d58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d590: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x11d590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x11d594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d59c: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x11d59cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11d5a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11d5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d5a4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x11d5a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11d5a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x11d5a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d5ac: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x11d5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x11d5b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11d5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11d5b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11d5b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d5b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11d5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11d5bc: 0x0  nop
    ctx->pc = 0x11d5bcu;
    // NOP
label_11d5c0:
    // 0x11d5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d5c4:
    // 0x11d5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D5C4u;
            // 0x11d5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D5CCu;
}
