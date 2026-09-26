#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFishingLine__Fv
// Address: 0x3122e0 - 0x3125cc
void DrawFishingLine__Fv_0x3122e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFishingLine__Fv_0x3122e0");
#endif

    switch (ctx->pc) {
        case 0x312328u: goto label_312328;
        case 0x312340u: goto label_312340;
        case 0x31234cu: goto label_31234c;
        case 0x312374u: goto label_312374;
        case 0x312384u: goto label_312384;
        case 0x312390u: goto label_312390;
        case 0x31239cu: goto label_31239c;
        case 0x3123a8u: goto label_3123a8;
        case 0x3123b4u: goto label_3123b4;
        case 0x3123c0u: goto label_3123c0;
        case 0x3123d8u: goto label_3123d8;
        case 0x3123f0u: goto label_3123f0;
        case 0x312400u: goto label_312400;
        case 0x312414u: goto label_312414;
        case 0x312420u: goto label_312420;
        case 0x312430u: goto label_312430;
        case 0x31247cu: goto label_31247c;
        case 0x312490u: goto label_312490;
        case 0x31249cu: goto label_31249c;
        case 0x3124b8u: goto label_3124b8;
        case 0x3124d8u: goto label_3124d8;
        case 0x312508u: goto label_312508;
        case 0x31251cu: goto label_31251c;
        case 0x312544u: goto label_312544;
        case 0x312554u: goto label_312554;
        case 0x31255cu: goto label_31255c;
        case 0x312584u: goto label_312584;
        case 0x312594u: goto label_312594;
        case 0x3125b0u: goto label_3125b0;
        default: break;
    }

    ctx->pc = 0x3122e0u;

    // 0x3122e0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x3122e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x3122e4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3122e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3122e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3122e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3122ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3122ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3122f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3122f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3122f4: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x3122f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x3122f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3122f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3122fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3122fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x312304: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x312304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31230c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31230cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312310: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x312314: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x312314u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x312318: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x312318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x31231c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31231cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312320: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x312320u;
    SET_GPR_U32(ctx, 31, 0x312328u);
    ctx->pc = 0x312324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312320u;
            // 0x312324: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312328u; }
        if (ctx->pc != 0x312328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312328u; }
        if (ctx->pc != 0x312328u) { return; }
    }
    ctx->pc = 0x312328u;
label_312328:
    // 0x312328: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x312328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x31232c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x312330: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312334: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x312334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312338: 0xc041c4a  jal         func_107128
    ctx->pc = 0x312338u;
    SET_GPR_U32(ctx, 31, 0x312340u);
    ctx->pc = 0x31233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312338u;
            // 0x31233c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312340u; }
        if (ctx->pc != 0x312340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312340u; }
        if (ctx->pc != 0x312340u) { return; }
    }
    ctx->pc = 0x312340u;
label_312340:
    // 0x312340: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x312340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312344: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x312344u;
    SET_GPR_U32(ctx, 31, 0x31234Cu);
    ctx->pc = 0x312348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312344u;
            // 0x312348: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31234Cu; }
        if (ctx->pc != 0x31234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31234Cu; }
        if (ctx->pc != 0x31234Cu) { return; }
    }
    ctx->pc = 0x31234Cu;
label_31234c:
    // 0x31234c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x312350: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x312350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312354: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x312354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x312358: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31235c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x31235cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312360: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x312360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x312364: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x312364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x312368: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x312368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x31236c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x31236Cu;
    SET_GPR_U32(ctx, 31, 0x312374u);
    ctx->pc = 0x312370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31236Cu;
            // 0x312370: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312374u; }
        if (ctx->pc != 0x312374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312374u; }
        if (ctx->pc != 0x312374u) { return; }
    }
    ctx->pc = 0x312374u;
label_312374:
    // 0x312374: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31237c: 0xc04d104  jal         func_134410
    ctx->pc = 0x31237Cu;
    SET_GPR_U32(ctx, 31, 0x312384u);
    ctx->pc = 0x312380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31237Cu;
            // 0x312380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312384u; }
        if (ctx->pc != 0x312384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312384u; }
        if (ctx->pc != 0x312384u) { return; }
    }
    ctx->pc = 0x312384u;
label_312384:
    // 0x312384: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312388: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x312388u;
    SET_GPR_U32(ctx, 31, 0x312390u);
    ctx->pc = 0x31238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312388u;
            // 0x31238c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312390u; }
        if (ctx->pc != 0x312390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312390u; }
        if (ctx->pc != 0x312390u) { return; }
    }
    ctx->pc = 0x312390u;
label_312390:
    // 0x312390: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312394: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x312394u;
    SET_GPR_U32(ctx, 31, 0x31239Cu);
    ctx->pc = 0x312398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312394u;
            // 0x312398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31239Cu; }
        if (ctx->pc != 0x31239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31239Cu; }
        if (ctx->pc != 0x31239Cu) { return; }
    }
    ctx->pc = 0x31239Cu;
label_31239c:
    // 0x31239c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3123a0: 0xc04d424  jal         func_135090
    ctx->pc = 0x3123A0u;
    SET_GPR_U32(ctx, 31, 0x3123A8u);
    ctx->pc = 0x3123A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123A0u;
            // 0x3123a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123A8u; }
        if (ctx->pc != 0x3123A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123A8u; }
        if (ctx->pc != 0x3123A8u) { return; }
    }
    ctx->pc = 0x3123A8u;
label_3123a8:
    // 0x3123a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3123a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3123ac: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x3123ACu;
    SET_GPR_U32(ctx, 31, 0x3123B4u);
    ctx->pc = 0x3123B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123ACu;
            // 0x3123b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123B4u; }
        if (ctx->pc != 0x3123B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123B4u; }
        if (ctx->pc != 0x3123B4u) { return; }
    }
    ctx->pc = 0x3123B4u;
label_3123b4:
    // 0x3123b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3123b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3123b8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x3123B8u;
    SET_GPR_U32(ctx, 31, 0x3123C0u);
    ctx->pc = 0x3123BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123B8u;
            // 0x3123bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123C0u; }
        if (ctx->pc != 0x3123C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123C0u; }
        if (ctx->pc != 0x3123C0u) { return; }
    }
    ctx->pc = 0x3123C0u;
label_3123c0:
    // 0x3123c0: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x3123c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3123c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3123c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3123c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3123c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3123ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123d0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x3123D0u;
    SET_GPR_U32(ctx, 31, 0x3123D8u);
    ctx->pc = 0x3123D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123D0u;
            // 0x3123d4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123D8u; }
        if (ctx->pc != 0x3123D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123D8u; }
        if (ctx->pc != 0x3123D8u) { return; }
    }
    ctx->pc = 0x3123D8u;
label_3123d8:
    // 0x3123d8: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x3123d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x3123dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3123DCu;
    {
        const bool branch_taken_0x3123dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3123DCu;
            // 0x3123e0: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123dc) {
            ctx->pc = 0x312428u;
            goto label_312428;
        }
    }
    ctx->pc = 0x3123E4u;
    // 0x3123e4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3123e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3123e8: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x3123E8u;
    SET_GPR_U32(ctx, 31, 0x3123F0u);
    ctx->pc = 0x3123ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123E8u;
            // 0x3123ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123F0u; }
        if (ctx->pc != 0x3123F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3123F0u; }
        if (ctx->pc != 0x3123F0u) { return; }
    }
    ctx->pc = 0x3123F0u;
label_3123f0:
    // 0x3123f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3123f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123f4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3123f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3123f8: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x3123F8u;
    SET_GPR_U32(ctx, 31, 0x312400u);
    ctx->pc = 0x3123FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3123F8u;
            // 0x3123fc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312400u; }
        if (ctx->pc != 0x312400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312400u; }
        if (ctx->pc != 0x312400u) { return; }
    }
    ctx->pc = 0x312400u;
label_312400:
    // 0x312400: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x312400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x312404: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x312404u;
    {
        const bool branch_taken_0x312404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312404u;
            // 0x312408: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312404) {
            ctx->pc = 0x3125A8u;
            goto label_3125a8;
        }
    }
    ctx->pc = 0x31240Cu;
    // 0x31240c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x31240Cu;
    SET_GPR_U32(ctx, 31, 0x312414u);
    ctx->pc = 0x312410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31240Cu;
            // 0x312410: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312414u; }
        if (ctx->pc != 0x312414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312414u; }
        if (ctx->pc != 0x312414u) { return; }
    }
    ctx->pc = 0x312414u;
label_312414:
    // 0x312414: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312418: 0xc04d318  jal         func_134C60
    ctx->pc = 0x312418u;
    SET_GPR_U32(ctx, 31, 0x312420u);
    ctx->pc = 0x31241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312418u;
            // 0x31241c: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312420u; }
        if (ctx->pc != 0x312420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312420u; }
        if (ctx->pc != 0x312420u) { return; }
    }
    ctx->pc = 0x312420u;
label_312420:
    // 0x312420: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x312420u;
    {
        const bool branch_taken_0x312420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312420) {
            ctx->pc = 0x3125A8u;
            goto label_3125a8;
        }
    }
    ctx->pc = 0x312428u;
label_312428:
    // 0x312428: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x312428u;
    SET_GPR_U32(ctx, 31, 0x312430u);
    ctx->pc = 0x31242Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312428u;
            // 0x31242c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312430u; }
        if (ctx->pc != 0x312430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312430u; }
        if (ctx->pc != 0x312430u) { return; }
    }
    ctx->pc = 0x312430u;
label_312430:
    // 0x312430: 0x8f87a248  lw          $a3, -0x5DB8($gp)
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x312434: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x312434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x312438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31243c: 0x24c6e0dc  addiu       $a2, $a2, -0x1F24
    ctx->pc = 0x31243cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959324));
    // 0x312440: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x312444: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x312444u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x312448: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x312448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x31244c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x31244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x312450: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x312450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x312454: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x312454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x312458: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x312458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x31245c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x31245cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x312460: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x312460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x312464: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x312464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x312468: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x312468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31246c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x31246cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x312470: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x312470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x312474: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x312474u;
    SET_GPR_U32(ctx, 31, 0x31247Cu);
    ctx->pc = 0x312478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312474u;
            // 0x312478: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31247Cu; }
        if (ctx->pc != 0x31247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31247Cu; }
        if (ctx->pc != 0x31247Cu) { return; }
    }
    ctx->pc = 0x31247Cu;
label_31247c:
    // 0x31247c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x31247cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x312480: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312480u;
    {
        const bool branch_taken_0x312480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312480u;
            // 0x312484: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312480) {
            ctx->pc = 0x31249Cu;
            goto label_31249c;
        }
    }
    ctx->pc = 0x312488u;
    // 0x312488: 0xc04d318  jal         func_134C60
    ctx->pc = 0x312488u;
    SET_GPR_U32(ctx, 31, 0x312490u);
    ctx->pc = 0x31248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312488u;
            // 0x31248c: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312490u; }
        if (ctx->pc != 0x312490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312490u; }
        if (ctx->pc != 0x312490u) { return; }
    }
    ctx->pc = 0x312490u;
label_312490:
    // 0x312490: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312494: 0xc04d318  jal         func_134C60
    ctx->pc = 0x312494u;
    SET_GPR_U32(ctx, 31, 0x31249Cu);
    ctx->pc = 0x312498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312494u;
            // 0x312498: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31249Cu; }
        if (ctx->pc != 0x31249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31249Cu; }
        if (ctx->pc != 0x31249Cu) { return; }
    }
    ctx->pc = 0x31249Cu;
label_31249c:
    // 0x31249c: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x31249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x3124a0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x3124a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3124a4: 0x2a01003f  slti        $at, $s0, 0x3F
    ctx->pc = 0x3124a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x3124a8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x3124A8u;
    {
        const bool branch_taken_0x3124a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3124A8u;
            // 0x3124ac: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124a8) {
            ctx->pc = 0x3125A8u;
            goto label_3125a8;
        }
    }
    ctx->pc = 0x3124B0u;
    // 0x3124b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3124b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3124b4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x3124b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3124b8:
    // 0x3124b8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3124b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3124bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3124bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3124c0: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x3124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x3124c4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3124c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3124c8: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x3124c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3124cc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3124ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3124d0: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x3124D0u;
    SET_GPR_U32(ctx, 31, 0x3124D8u);
    ctx->pc = 0x3124D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3124D0u;
            // 0x3124d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3124D8u; }
        if (ctx->pc != 0x3124D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3124D8u; }
        if (ctx->pc != 0x3124D8u) { return; }
    }
    ctx->pc = 0x3124D8u;
label_3124d8:
    // 0x3124d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3124d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124dc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x3124dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3124e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3124e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3124e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3124e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3124e8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x3124e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x3124ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3124ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3124f0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3124f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3124f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3124f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3124f8: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x3124f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x3124fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3124fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x312500: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x312500u;
    SET_GPR_U32(ctx, 31, 0x312508u);
    ctx->pc = 0x312504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312500u;
            // 0x312504: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312508u; }
        if (ctx->pc != 0x312508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312508u; }
        if (ctx->pc != 0x312508u) { return; }
    }
    ctx->pc = 0x312508u;
label_312508:
    // 0x312508: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x312508u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x31250c: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x31250Cu;
    {
        const bool branch_taken_0x31250c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31250c) {
            ctx->pc = 0x312594u;
            goto label_312594;
        }
    }
    ctx->pc = 0x312514u;
    // 0x312514: 0xc0c3e78  jal         func_30F9E0
    ctx->pc = 0x312514u;
    SET_GPR_U32(ctx, 31, 0x31251Cu);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31251Cu; }
        if (ctx->pc != 0x31251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31251Cu; }
        if (ctx->pc != 0x31251Cu) { return; }
    }
    ctx->pc = 0x31251Cu;
label_31251c:
    // 0x31251c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x31251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x312520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312524: 0x0  nop
    ctx->pc = 0x312524u;
    // NOP
    // 0x312528: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312528u;
    {
        const bool branch_taken_0x312528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312528u;
            // 0x31252c: 0x240500dc  addiu       $a1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312528) {
            ctx->pc = 0x312544u;
            goto label_312544;
        }
    }
    ctx->pc = 0x312530u;
    // 0x312530: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312534: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x312534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312538: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x312538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31253c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x31253Cu;
    SET_GPR_U32(ctx, 31, 0x312544u);
    ctx->pc = 0x312540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31253Cu;
            // 0x312540: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312544u; }
        if (ctx->pc != 0x312544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312544u; }
        if (ctx->pc != 0x312544u) { return; }
    }
    ctx->pc = 0x312544u;
label_312544:
    // 0x312544: 0x0  nop
    ctx->pc = 0x312544u;
    // NOP
    // 0x312548: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31254c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x31254Cu;
    SET_GPR_U32(ctx, 31, 0x312554u);
    ctx->pc = 0x312550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31254Cu;
            // 0x312550: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312554u; }
        if (ctx->pc != 0x312554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312554u; }
        if (ctx->pc != 0x312554u) { return; }
    }
    ctx->pc = 0x312554u;
label_312554:
    // 0x312554: 0xc0c3e78  jal         func_30F9E0
    ctx->pc = 0x312554u;
    SET_GPR_U32(ctx, 31, 0x31255Cu);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31255Cu; }
        if (ctx->pc != 0x31255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31255Cu; }
        if (ctx->pc != 0x31255Cu) { return; }
    }
    ctx->pc = 0x31255Cu;
label_31255c:
    // 0x31255c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x31255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x312560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312564: 0x0  nop
    ctx->pc = 0x312564u;
    // NOP
    // 0x312568: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312568u;
    {
        const bool branch_taken_0x312568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312568u;
            // 0x31256c: 0x240500dc  addiu       $a1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312568) {
            ctx->pc = 0x312584u;
            goto label_312584;
        }
    }
    ctx->pc = 0x312570u;
    // 0x312570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x312574: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x312574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312578: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x312578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31257c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x31257Cu;
    SET_GPR_U32(ctx, 31, 0x312584u);
    ctx->pc = 0x312580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31257Cu;
            // 0x312580: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312584u; }
        if (ctx->pc != 0x312584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312584u; }
        if (ctx->pc != 0x312584u) { return; }
    }
    ctx->pc = 0x312584u;
label_312584:
    // 0x312584: 0x0  nop
    ctx->pc = 0x312584u;
    // NOP
    // 0x312588: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x312588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31258c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x31258Cu;
    SET_GPR_U32(ctx, 31, 0x312594u);
    ctx->pc = 0x312590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31258Cu;
            // 0x312590: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312594u; }
        if (ctx->pc != 0x312594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312594u; }
        if (ctx->pc != 0x312594u) { return; }
    }
    ctx->pc = 0x312594u;
label_312594:
    // 0x312594: 0x0  nop
    ctx->pc = 0x312594u;
    // NOP
    // 0x312598: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31259c: 0x2a02003f  slti        $v0, $s0, 0x3F
    ctx->pc = 0x31259cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x3125a0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3125A0u;
    {
        const bool branch_taken_0x3125a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3125A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3125A0u;
            // 0x3125a4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125a0) {
            ctx->pc = 0x3124B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3124b8;
        }
    }
    ctx->pc = 0x3125A8u;
label_3125a8:
    // 0x3125a8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x3125A8u;
    SET_GPR_U32(ctx, 31, 0x3125B0u);
    ctx->pc = 0x3125ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3125A8u;
            // 0x3125ac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3125B0u; }
        if (ctx->pc != 0x3125B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3125B0u; }
        if (ctx->pc != 0x3125B0u) { return; }
    }
    ctx->pc = 0x3125B0u;
label_3125b0:
    // 0x3125b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3125b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3125b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3125b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3125b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3125b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3125bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3125bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3125c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3125c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3125c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3125C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3125C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3125C4u;
            // 0x3125c8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3125CCu;
}
