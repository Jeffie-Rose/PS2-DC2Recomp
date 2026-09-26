#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawBaseBoard__13CNameRegiMenuFv
// Address: 0x30d340 - 0x30d86c
void DrawBaseBoard__13CNameRegiMenuFv_0x30d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawBaseBoard__13CNameRegiMenuFv_0x30d340");
#endif

    switch (ctx->pc) {
        case 0x30d37cu: goto label_30d37c;
        case 0x30d394u: goto label_30d394;
        case 0x30d3acu: goto label_30d3ac;
        case 0x30d3d0u: goto label_30d3d0;
        case 0x30d42cu: goto label_30d42c;
        case 0x30d464u: goto label_30d464;
        case 0x30d46cu: goto label_30d46c;
        case 0x30d490u: goto label_30d490;
        case 0x30d4b0u: goto label_30d4b0;
        case 0x30d4dcu: goto label_30d4dc;
        case 0x30d51cu: goto label_30d51c;
        case 0x30d54cu: goto label_30d54c;
        case 0x30d588u: goto label_30d588;
        case 0x30d5c8u: goto label_30d5c8;
        case 0x30d5ecu: goto label_30d5ec;
        case 0x30d654u: goto label_30d654;
        case 0x30d660u: goto label_30d660;
        case 0x30d6e0u: goto label_30d6e0;
        case 0x30d720u: goto label_30d720;
        case 0x30d76cu: goto label_30d76c;
        case 0x30d7b0u: goto label_30d7b0;
        case 0x30d7c8u: goto label_30d7c8;
        case 0x30d7f0u: goto label_30d7f0;
        case 0x30d808u: goto label_30d808;
        case 0x30d838u: goto label_30d838;
        default: break;
    }

    ctx->pc = 0x30d340u;

    // 0x30d340: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x30d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x30d344: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30d348: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x30d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x30d34c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x30d350: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30d354: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30d358: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30d35c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30d360: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30d364: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d368: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30d36c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30d36cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30d370: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x30d370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x30d374: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x30D374u;
    SET_GPR_U32(ctx, 31, 0x30D37Cu);
    ctx->pc = 0x30D378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D374u;
            // 0x30d378: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D37Cu; }
        if (ctx->pc != 0x30D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D37Cu; }
        if (ctx->pc != 0x30D37Cu) { return; }
    }
    ctx->pc = 0x30D37Cu;
label_30d37c:
    // 0x30d37c: 0x8f83a1e4  lw          $v1, -0x5E1C($gp)
    ctx->pc = 0x30d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943204)));
    // 0x30d380: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x30D380u;
    {
        const bool branch_taken_0x30d380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d380) {
            ctx->pc = 0x30D414u;
            goto label_30d414;
        }
    }
    ctx->pc = 0x30D388u;
    // 0x30d388: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x30d388u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d38c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30D38Cu;
    SET_GPR_U32(ctx, 31, 0x30D394u);
    ctx->pc = 0x30D390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D38Cu;
            // 0x30d390: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D394u; }
        if (ctx->pc != 0x30D394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D394u; }
        if (ctx->pc != 0x30D394u) { return; }
    }
    ctx->pc = 0x30D394u;
label_30d394:
    // 0x30d394: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x30d394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d398: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x30d398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x30d39c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x30d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x30d3a0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x30d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d3a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D3A4u;
    SET_GPR_U32(ctx, 31, 0x30D3ACu);
    ctx->pc = 0x30D3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3A4u;
            // 0x30d3a8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3ACu; }
        if (ctx->pc != 0x30D3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3ACu; }
        if (ctx->pc != 0x30D3ACu) { return; }
    }
    ctx->pc = 0x30D3ACu;
label_30d3ac:
    // 0x30d3ac: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x30d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d3b0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30d3b4: 0x8f85a1e4  lw          $a1, -0x5E1C($gp)
    ctx->pc = 0x30d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943204)));
    // 0x30d3b8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x30d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x30d3bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30d3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d3c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3c4: 0xc44c03b4  lwc1        $f12, 0x3B4($v0)
    ctx->pc = 0x30d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d3c8: 0xc088f58  jal         func_223D60
    ctx->pc = 0x30D3C8u;
    SET_GPR_U32(ctx, 31, 0x30D3D0u);
    ctx->pc = 0x30D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3C8u;
            // 0x30d3cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3D0u; }
        if (ctx->pc != 0x30D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D3D0u; }
        if (ctx->pc != 0x30D3D0u) { return; }
    }
    ctx->pc = 0x30D3D0u;
label_30d3d0:
    // 0x30d3d0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x30d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d3d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30d3d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d3d8: 0xc46203b4  lwc1        $f2, 0x3B4($v1)
    ctx->pc = 0x30d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30d3dc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x30d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x30d3e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30d3e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d3e4: 0x0  nop
    ctx->pc = 0x30d3e4u;
    // NOP
    // 0x30d3e8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30d3e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30d3ec: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x30d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d3f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30d3f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30d3f4: 0x0  nop
    ctx->pc = 0x30d3f4u;
    // NOP
    // 0x30d3f8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x30D3F8u;
    {
        const bool branch_taken_0x30d3f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30D3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D3F8u;
            // 0x30d3fc: 0xe46103b4  swc1        $f1, 0x3B4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d3f8) {
            ctx->pc = 0x30D414u;
            goto label_30d414;
        }
    }
    ctx->pc = 0x30D400u;
    // 0x30d400: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x30d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d404: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x30d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30d408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d40c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30d40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30d410: 0xe46003b4  swc1        $f0, 0x3B4($v1)
    ctx->pc = 0x30d410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 948), bits); }
label_30d414:
    // 0x30d414: 0x8f83a1e0  lw          $v1, -0x5E20($gp)
    ctx->pc = 0x30d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30d418: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x30D418u;
    {
        const bool branch_taken_0x30d418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d418) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D420u;
    // 0x30d420: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x30d420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d424: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30D424u;
    SET_GPR_U32(ctx, 31, 0x30D42Cu);
    ctx->pc = 0x30D428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D424u;
            // 0x30d428: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D42Cu; }
        if (ctx->pc != 0x30D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D42Cu; }
        if (ctx->pc != 0x30D42Cu) { return; }
    }
    ctx->pc = 0x30D42Cu;
label_30d42c:
    // 0x30d42c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x30d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30d430: 0x27a50268  addiu       $a1, $sp, 0x268
    ctx->pc = 0x30d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x30d434: 0xdf848630  ld          $a0, -0x79D0($gp)
    ctx->pc = 0x30d434u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x30d438: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x30d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d43c: 0x24170013  addiu       $s7, $zero, 0x13
    ctx->pc = 0x30d43cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30d440: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30d440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d444: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x30d444u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d448: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30d448u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d44c: 0x2442fef6  addiu       $v0, $v0, -0x10A
    ctx->pc = 0x30d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967030));
    // 0x30d450: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x30d450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x30d454: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x30d454u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x30d458: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d45c: 0xa7a3026a  sh          $v1, 0x26A($sp)
    ctx->pc = 0x30d45cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 618), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d460: 0x24500003  addiu       $s0, $v0, 0x3
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_30d464:
    // 0x30d464: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30d464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d468: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30d468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d46c:
    // 0x30d46c: 0x0  nop
    ctx->pc = 0x30d46cu;
    // NOP
    // 0x30d470: 0x27828628  addiu       $v0, $gp, -0x79D8
    ctx->pc = 0x30d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936104));
    // 0x30d474: 0x53b021  addu        $s6, $v0, $s3
    ctx->pc = 0x30d474u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30d478: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30d47c: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x30d47cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30d480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30d480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d484: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d488: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D488u;
    SET_GPR_U32(ctx, 31, 0x30D490u);
    ctx->pc = 0x30D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D488u;
            // 0x30d48c: 0x240701e0  addiu       $a3, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D490u; }
        if (ctx->pc != 0x30D490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D490u; }
        if (ctx->pc != 0x30D490u) { return; }
    }
    ctx->pc = 0x30D490u;
label_30d490:
    // 0x30d490: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x30d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x30d494: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x30d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x30d498: 0x84540268  lh          $s4, 0x268($v0)
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 616)));
    // 0x30d49c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30d49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30d4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4a4: 0x240701e0  addiu       $a3, $zero, 0x1E0
    ctx->pc = 0x30d4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x30d4a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D4A8u;
    SET_GPR_U32(ctx, 31, 0x30D4B0u);
    ctx->pc = 0x30D4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D4A8u;
            // 0x30d4ac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D4B0u; }
        if (ctx->pc != 0x30D4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D4B0u; }
        if (ctx->pc != 0x30D4B0u) { return; }
    }
    ctx->pc = 0x30D4B0u;
label_30d4b0:
    // 0x30d4b0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30d4b4: 0x8f84a1e0  lw          $a0, -0x5E20($gp)
    ctx->pc = 0x30d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30d4b8: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x30d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x30d4bc: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x30d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x30d4c0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x30d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x30d4c4: 0x84470006  lh          $a3, 0x6($v0)
    ctx->pc = 0x30d4c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x30d4c8: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x30d4c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d4cc: 0x84490002  lh          $t1, 0x2($v0)
    ctx->pc = 0x30d4ccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x30d4d0: 0x844a0004  lh          $t2, 0x4($v0)
    ctx->pc = 0x30d4d0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30d4d4: 0xc088004  jal         func_220010
    ctx->pc = 0x30D4D4u;
    SET_GPR_U32(ctx, 31, 0x30D4DCu);
    ctx->pc = 0x30D4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D4D4u;
            // 0x30d4d8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D4DCu; }
        if (ctx->pc != 0x30D4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D4DCu; }
        if (ctx->pc != 0x30D4DCu) { return; }
    }
    ctx->pc = 0x30D4DCu;
label_30d4dc:
    // 0x30d4dc: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x30d4dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30d4e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30d4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30d4e4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x30d4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30d4e8: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x30d4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x30d4ec: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x30d4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x30d4f0: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x30D4F0u;
    {
        const bool branch_taken_0x30d4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D4F0u;
            // 0x30d4f4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4f0) {
            ctx->pc = 0x30D46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d46c;
        }
    }
    ctx->pc = 0x30D4F8u;
    // 0x30d4f8: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x30d4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d4fc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x30d4fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x30d500: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x30d500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d504: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30d504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d508: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x30d508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30d50c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x30D50Cu;
    {
        const bool branch_taken_0x30d50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D50Cu;
            // 0x30d510: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d50c) {
            ctx->pc = 0x30D464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d464;
        }
    }
    ctx->pc = 0x30D514u;
    // 0x30d514: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30D514u;
    SET_GPR_U32(ctx, 31, 0x30D51Cu);
    ctx->pc = 0x30D518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D514u;
            // 0x30d518: 0x8fa400cc  lw          $a0, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D51Cu; }
        if (ctx->pc != 0x30D51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D51Cu; }
        if (ctx->pc != 0x30D51Cu) { return; }
    }
    ctx->pc = 0x30D51Cu;
label_30d51c:
    // 0x30d51c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x30d51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30d520: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30d520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d524: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30d524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30d528: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30d528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30d52c: 0x2463e540  addiu       $v1, $v1, -0x1AC0
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960448));
    // 0x30d530: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30d530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d534: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x30d534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30d538: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30d53c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x30d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30d540: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30d544: 0xc0c34c0  jal         func_30D300
    ctx->pc = 0x30D544u;
    SET_GPR_U32(ctx, 31, 0x30D54Cu);
    ctx->pc = 0x30D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D544u;
            // 0x30d548: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D300u;
    if (runtime->hasFunction(0x30D300u)) {
        auto targetFn = runtime->lookupFunction(0x30D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D54Cu; }
        if (ctx->pc != 0x30D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertNameRegiBaseBoardTable__Fi_0x30d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D54Cu; }
        if (ctx->pc != 0x30D54Cu) { return; }
    }
    ctx->pc = 0x30D54Cu;
label_30d54c:
    // 0x30d54c: 0x8f8a8ad0  lw          $t2, -0x7530($gp)
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30d550: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30d550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30d554: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x30d554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d558: 0x2463e4d0  addiu       $v1, $v1, -0x1B30
    ctx->pc = 0x30d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960336));
    // 0x30d55c: 0x86060002  lh          $a2, 0x2($s0)
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30d560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30d560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30d564: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x30d564u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d568: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x30d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30d56c: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30d570: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x30d574: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x30d574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x30d578: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x30d578u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x30d57c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x30d580: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D580u;
    SET_GPR_U32(ctx, 31, 0x30D588u);
    ctx->pc = 0x30D584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D580u;
            // 0x30d584: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D588u; }
        if (ctx->pc != 0x30D588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D588u; }
        if (ctx->pc != 0x30D588u) { return; }
    }
    ctx->pc = 0x30D588u;
label_30d588:
    // 0x30d588: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x30d588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d58c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30d58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d590: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x30d590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30d594: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x30d594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30d598: 0x8f84a1e0  lw          $a0, -0x5E20($gp)
    ctx->pc = 0x30d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30d59c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30d59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5a0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30d5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5a4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x30d5a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30d5ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d5b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d5b4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x30d5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x30d5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30d5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d5c0: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x30D5C0u;
    SET_GPR_U32(ctx, 31, 0x30D5C8u);
    ctx->pc = 0x30D5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D5C0u;
            // 0x30d5c4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5C8u; }
        if (ctx->pc != 0x30D5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5C8u; }
        if (ctx->pc != 0x30D5C8u) { return; }
    }
    ctx->pc = 0x30D5C8u;
label_30d5c8:
    // 0x30d5c8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30d5cc: 0x1c600022  bgtz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x30D5CCu;
    {
        const bool branch_taken_0x30d5cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x30D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D5CCu;
            // 0x30d5d0: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5cc) {
            ctx->pc = 0x30D658u;
            goto label_30d658;
        }
    }
    ctx->pc = 0x30D5D4u;
    // 0x30d5d4: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x30d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x30d5d8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x30d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x30d5dc: 0x24060144  addiu       $a2, $zero, 0x144
    ctx->pc = 0x30d5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x30d5e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30d5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D5E4u;
    SET_GPR_U32(ctx, 31, 0x30D5ECu);
    ctx->pc = 0x30D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D5E4u;
            // 0x30d5e8: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5ECu; }
        if (ctx->pc != 0x30D5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5ECu; }
        if (ctx->pc != 0x30D5ECu) { return; }
    }
    ctx->pc = 0x30D5ECu;
label_30d5ec:
    // 0x30d5ec: 0x8f8b8ad0  lw          $t3, -0x7530($gp)
    ctx->pc = 0x30d5ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30d5f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30d5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d5f4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30d5f8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30d5fc: 0x2463e4f8  addiu       $v1, $v1, -0x1B08
    ctx->pc = 0x30d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960376));
    // 0x30d600: 0x2442e4fa  addiu       $v0, $v0, -0x1B06
    ctx->pc = 0x30d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960378));
    // 0x30d604: 0x8f84a1e0  lw          $a0, -0x5E20($gp)
    ctx->pc = 0x30d604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30d608: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x30d608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x30d60c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30d60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d610: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30d610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d614: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x30d614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d618: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x30d618u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x30d61c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x30d61cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x30d620: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x30d620u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x30d624: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x30d624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x30d628: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x30d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x30d62c: 0x846a0000  lh          $t2, 0x0($v1)
    ctx->pc = 0x30d62cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d630: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d634: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x30d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x30d638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30d638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d63c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d640: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x30d640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x30d644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30d648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d64c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x30D64Cu;
    SET_GPR_U32(ctx, 31, 0x30D654u);
    ctx->pc = 0x30D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D64Cu;
            // 0x30d650: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D654u; }
        if (ctx->pc != 0x30D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D654u; }
        if (ctx->pc != 0x30D654u) { return; }
    }
    ctx->pc = 0x30D654u;
label_30d654:
    // 0x30d654: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x30d654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30d658:
    // 0x30d658: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x30d658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30d65c: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x30d65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_30d660:
    // 0x30d660: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x30d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d664: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30d668: 0x24740158  addiu       $s4, $v1, 0x158
    ctx->pc = 0x30d668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x30d66c: 0x84630158  lh          $v1, 0x158($v1)
    ctx->pc = 0x30d66cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x30d670: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x30d670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30d674: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x30D674u;
    {
        const bool branch_taken_0x30d674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d674) {
            ctx->pc = 0x30D72Cu;
            goto label_30d72c;
        }
    }
    ctx->pc = 0x30D67Cu;
    // 0x30d67c: 0x8f888ad0  lw          $t0, -0x7530($gp)
    ctx->pc = 0x30d67cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30d680: 0x2603fffb  addiu       $v1, $s0, -0x5
    ctx->pc = 0x30d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x30d684: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30d684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d688: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x30d688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x30d68c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d690: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x30d694: 0x24c6e4d0  addiu       $a2, $a2, -0x1B30
    ctx->pc = 0x30d694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960336));
    // 0x30d698: 0x24a5e5c0  addiu       $a1, $a1, -0x1A40
    ctx->pc = 0x30d698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960576));
    // 0x30d69c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30d6a0: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x30d6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30d6a4: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x30d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x30d6a8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x30d6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x30d6ac: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x30d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30d6b0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x30d6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30d6b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d6b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x30d6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30d6bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30d6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d6c4: 0x2668821  addu        $s1, $s3, $a2
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x30d6c8: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x30d6c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d6cc: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x30d6ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x30d6d0: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x30d6d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30d6d4: 0x84480006  lh          $t0, 0x6($v0)
    ctx->pc = 0x30d6d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x30d6d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D6D8u;
    SET_GPR_U32(ctx, 31, 0x30D6E0u);
    ctx->pc = 0x30D6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D6D8u;
            // 0x30d6dc: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6E0u; }
        if (ctx->pc != 0x30D6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6E0u; }
        if (ctx->pc != 0x30D6E0u) { return; }
    }
    ctx->pc = 0x30D6E0u;
label_30d6e0:
    // 0x30d6e0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x30d6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30d6e4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30d6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d6e8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x30d6e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x30d6ec: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x30d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x30d6f0: 0x8f84a1e0  lw          $a0, -0x5E20($gp)
    ctx->pc = 0x30d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30d6f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30d6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6f8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30d6f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6fc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x30d6fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d700: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30d704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30d704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d708: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d70c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x30d70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x30d710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30d714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d718: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x30D718u;
    SET_GPR_U32(ctx, 31, 0x30D720u);
    ctx->pc = 0x30D71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D718u;
            // 0x30d71c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D720u; }
        if (ctx->pc != 0x30D720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D720u; }
        if (ctx->pc != 0x30D720u) { return; }
    }
    ctx->pc = 0x30D720u;
label_30d720:
    // 0x30d720: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x30d720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30d724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d728: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x30d728u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_30d72c:
    // 0x30d72c: 0x0  nop
    ctx->pc = 0x30d72cu;
    // NOP
    // 0x30d730: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30d730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30d734: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x30d734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x30d738: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x30d738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x30d73c: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x30D73Cu;
    {
        const bool branch_taken_0x30d73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D73Cu;
            // 0x30d740: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d73c) {
            ctx->pc = 0x30D660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d660;
        }
    }
    ctx->pc = 0x30D744u;
    // 0x30d744: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x30d744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d748: 0x84640014  lh          $a0, 0x14($v1)
    ctx->pc = 0x30d748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x30d74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d750: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x30D750u;
    {
        const bool branch_taken_0x30d750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D750u;
            // 0x30d754: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d750) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D758u;
    // 0x30d758: 0x16a30037  bne         $s5, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x30D758u;
    {
        const bool branch_taken_0x30d758 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d758) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D760u;
    // 0x30d760: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x30d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30d764: 0xc047a42  jal         func_11E908
    ctx->pc = 0x30D764u;
    SET_GPR_U32(ctx, 31, 0x30D76Cu);
    ctx->pc = 0x30D768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D764u;
            // 0x30d768: 0xc44c0234  lwc1        $f12, 0x234($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D76Cu; }
        if (ctx->pc != 0x30D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D76Cu; }
        if (ctx->pc != 0x30D76Cu) { return; }
    }
    ctx->pc = 0x30D76Cu;
label_30d76c:
    // 0x30d76c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30d770: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30d770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30d774: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x30d774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x30d778: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30d778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30d77c: 0x0  nop
    ctx->pc = 0x30d77cu;
    // NOP
    // 0x30d780: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30d780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30d784: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x30d784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x30d788: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x30d788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30d78c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30d78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30d790: 0x0  nop
    ctx->pc = 0x30d790u;
    // NOP
    // 0x30d794: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x30d794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30d798: 0x8f83a1f0  lw          $v1, -0x5E10($gp)
    ctx->pc = 0x30d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943216)));
    // 0x30d79c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x30D79Cu;
    {
        const bool branch_taken_0x30d79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D79Cu;
            // 0x30d7a0: 0x46030500  add.s       $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d79c) {
            ctx->pc = 0x30D838u;
            goto label_30d838;
        }
    }
    ctx->pc = 0x30D7A4u;
    // 0x30d7a4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d7a8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30D7A8u;
    SET_GPR_U32(ctx, 31, 0x30D7B0u);
    ctx->pc = 0x30D7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7A8u;
            // 0x30d7ac: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7B0u; }
        if (ctx->pc != 0x30D7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7B0u; }
        if (ctx->pc != 0x30D7B0u) { return; }
    }
    ctx->pc = 0x30D7B0u;
label_30d7b0:
    // 0x30d7b0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x30d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30d7b4: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x30d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x30d7b8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x30d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x30d7bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30d7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D7C0u;
    SET_GPR_U32(ctx, 31, 0x30D7C8u);
    ctx->pc = 0x30D7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7C0u;
            // 0x30d7c4: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7C8u; }
        if (ctx->pc != 0x30D7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7C8u; }
        if (ctx->pc != 0x30D7C8u) { return; }
    }
    ctx->pc = 0x30D7C8u;
label_30d7c8:
    // 0x30d7c8: 0x8f84a1f0  lw          $a0, -0x5E10($gp)
    ctx->pc = 0x30d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943216)));
    // 0x30d7cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30d7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d7d0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x30d7d4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x30d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x30d7d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30d7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30d7dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30d7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x30d7e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x30d7e4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30d7e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7e8: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x30D7E8u;
    SET_GPR_U32(ctx, 31, 0x30D7F0u);
    ctx->pc = 0x30D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7E8u;
            // 0x30d7ec: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7F0u; }
        if (ctx->pc != 0x30D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7F0u; }
        if (ctx->pc != 0x30D7F0u) { return; }
    }
    ctx->pc = 0x30D7F0u;
label_30d7f0:
    // 0x30d7f0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30d7f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d7f8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x30d7fc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x30d7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30d800: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30D800u;
    SET_GPR_U32(ctx, 31, 0x30D808u);
    ctx->pc = 0x30D804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D800u;
            // 0x30d804: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D808u; }
        if (ctx->pc != 0x30D808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D808u; }
        if (ctx->pc != 0x30D808u) { return; }
    }
    ctx->pc = 0x30D808u;
label_30d808:
    // 0x30d808: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x30d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30d80c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30d80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d810: 0x8f84a1f0  lw          $a0, -0x5E10($gp)
    ctx->pc = 0x30d810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943216)));
    // 0x30d814: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x30d814u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x30d818: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x30d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30d81c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30d81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d820: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30d820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d824: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x30d824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d828: 0x2442ffd6  addiu       $v0, $v0, -0x2A
    ctx->pc = 0x30d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967254));
    // 0x30d82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d830: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x30D830u;
    SET_GPR_U32(ctx, 31, 0x30D838u);
    ctx->pc = 0x30D834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D830u;
            // 0x30d834: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D838u; }
        if (ctx->pc != 0x30D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D838u; }
        if (ctx->pc != 0x30D838u) { return; }
    }
    ctx->pc = 0x30D838u;
label_30d838:
    // 0x30d838: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x30d838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30d83c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30d840: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x30d840u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30d844: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x30d844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30d848: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30d848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30d84c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30d84cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d850: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30d850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d854: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30d854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d858: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30d858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d85c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d860: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30d860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d864: 0x3e00008  jr          $ra
    ctx->pc = 0x30D864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D864u;
            // 0x30d868: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D86Cu;
}
