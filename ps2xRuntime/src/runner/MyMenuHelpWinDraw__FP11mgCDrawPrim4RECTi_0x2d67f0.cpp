#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MyMenuHelpWinDraw__FP11mgCDrawPrim4RECTi
// Address: 0x2d67f0 - 0x2d6b5c
void MyMenuHelpWinDraw__FP11mgCDrawPrim4RECTi_0x2d67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MyMenuHelpWinDraw__FP11mgCDrawPrim4RECTi_0x2d67f0");
#endif

    switch (ctx->pc) {
        case 0x2d689cu: goto label_2d689c;
        case 0x2d68b4u: goto label_2d68b4;
        case 0x2d68d0u: goto label_2d68d0;
        case 0x2d68e8u: goto label_2d68e8;
        case 0x2d6900u: goto label_2d6900;
        case 0x2d691cu: goto label_2d691c;
        case 0x2d6934u: goto label_2d6934;
        case 0x2d694cu: goto label_2d694c;
        case 0x2d6968u: goto label_2d6968;
        case 0x2d6980u: goto label_2d6980;
        case 0x2d6998u: goto label_2d6998;
        case 0x2d69b4u: goto label_2d69b4;
        case 0x2d69ccu: goto label_2d69cc;
        case 0x2d69e4u: goto label_2d69e4;
        case 0x2d6a00u: goto label_2d6a00;
        case 0x2d6a18u: goto label_2d6a18;
        case 0x2d6a30u: goto label_2d6a30;
        case 0x2d6a4cu: goto label_2d6a4c;
        case 0x2d6a64u: goto label_2d6a64;
        case 0x2d6a7cu: goto label_2d6a7c;
        case 0x2d6a98u: goto label_2d6a98;
        case 0x2d6ab0u: goto label_2d6ab0;
        case 0x2d6ac8u: goto label_2d6ac8;
        case 0x2d6ae4u: goto label_2d6ae4;
        case 0x2d6afcu: goto label_2d6afc;
        case 0x2d6b14u: goto label_2d6b14;
        case 0x2d6b30u: goto label_2d6b30;
        default: break;
    }

    ctx->pc = 0x2d67f0u;

    // 0x2d67f0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2d67f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d67f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d67f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d67fc: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2d67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d6800: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d6804: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6808: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d6808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d680c: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2d680cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d6810: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d6810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d6814: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d6814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d6818: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d6818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d681c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d6820: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d6820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d6824: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d682c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6830: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6834: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6838: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d683c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6840: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x2d6840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d6844: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d6844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d6848: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2d6848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d684c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2d684cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d6850: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2d6850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d6854: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2d6854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d6858: 0x8fb40094  lw          $s4, 0x94($sp)
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2d685c: 0x8fa9009c  lw          $t1, 0x9C($sp)
    ctx->pc = 0x2d685cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2d6860: 0xa3a201ca  sb          $v0, 0x1CA($sp)
    ctx->pc = 0x2d6860u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 458), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6864: 0xa3a201c9  sb          $v0, 0x1C9($sp)
    ctx->pc = 0x2d6864u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 457), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6868: 0xa3a201c8  sb          $v0, 0x1C8($sp)
    ctx->pc = 0x2d6868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 456), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d686c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d6870: 0x2472ffd0  addiu       $s2, $v1, -0x30
    ctx->pc = 0x2d6870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2d6874: 0xa3a601cb  sb          $a2, 0x1CB($sp)
    ctx->pc = 0x2d6874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 459), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d6878: 0x26900016  addiu       $s0, $s4, 0x16
    ctx->pc = 0x2d6878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
    // 0x2d687c: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x2d687cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2d6880: 0x2533ffd4  addiu       $s3, $t1, -0x2C
    ctx->pc = 0x2d6880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967252));
    // 0x2d6884: 0x24570018  addiu       $s7, $v0, 0x18
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d6888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d688c: 0x2456ffe8  addiu       $s6, $v0, -0x18
    ctx->pc = 0x2d688cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2d6890: 0x2891021  addu        $v0, $s4, $t1
    ctx->pc = 0x2d6890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x2d6894: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6894u;
    SET_GPR_U32(ctx, 31, 0x2D689Cu);
    ctx->pc = 0x2D6898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6894u;
            // 0x2d6898: 0x2451ffea  addiu       $s1, $v0, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D689Cu; }
        if (ctx->pc != 0x2D689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D689Cu; }
        if (ctx->pc != 0x2D689Cu) { return; }
    }
    ctx->pc = 0x2D689Cu;
label_2d689c:
    // 0x2d689c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d689cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d68a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d68a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d68a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68a8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d68a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d68ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D68ACu;
    SET_GPR_U32(ctx, 31, 0x2D68B4u);
    ctx->pc = 0x2D68B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D68ACu;
            // 0x2d68b0: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D68B4u; }
        if (ctx->pc != 0x2D68B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D68B4u; }
        if (ctx->pc != 0x2D68B4u) { return; }
    }
    ctx->pc = 0x2D68B4u;
label_2d68b4:
    // 0x2d68b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d68b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d68b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68bc: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d68bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d68c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2d68c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d68c4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2d68c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d68c8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D68C8u;
    SET_GPR_U32(ctx, 31, 0x2D68D0u);
    ctx->pc = 0x2D68CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D68C8u;
            // 0x2d68cc: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D68D0u; }
        if (ctx->pc != 0x2D68D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D68D0u; }
        if (ctx->pc != 0x2D68D0u) { return; }
    }
    ctx->pc = 0x2D68D0u;
label_2d68d0:
    // 0x2d68d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d68d4: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2d68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2d68d8: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x2d68d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2d68dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d68dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d68e0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D68E0u;
    SET_GPR_U32(ctx, 31, 0x2D68E8u);
    ctx->pc = 0x2D68E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D68E0u;
            // 0x2d68e4: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D68E8u; }
        if (ctx->pc != 0x2D68E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D68E8u; }
        if (ctx->pc != 0x2D68E8u) { return; }
    }
    ctx->pc = 0x2D68E8u;
label_2d68e8:
    // 0x2d68e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d68ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d68ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d68f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d68f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D68F8u;
    SET_GPR_U32(ctx, 31, 0x2D6900u);
    ctx->pc = 0x2D68FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D68F8u;
            // 0x2d68fc: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6900u; }
        if (ctx->pc != 0x2D6900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6900u; }
        if (ctx->pc != 0x2D6900u) { return; }
    }
    ctx->pc = 0x2D6900u;
label_2d6900:
    // 0x2d6900: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6904: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6908: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d690c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2d690cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d6910: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d6914: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6914u;
    SET_GPR_U32(ctx, 31, 0x2D691Cu);
    ctx->pc = 0x2D6918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6914u;
            // 0x2d6918: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D691Cu; }
        if (ctx->pc != 0x2D691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D691Cu; }
        if (ctx->pc != 0x2D691Cu) { return; }
    }
    ctx->pc = 0x2D691Cu;
label_2d691c:
    // 0x2d691c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2d691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d6920: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2d6920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2d6924: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x2d6924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2d6928: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d692c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D692Cu;
    SET_GPR_U32(ctx, 31, 0x2D6934u);
    ctx->pc = 0x2D6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D692Cu;
            // 0x2d6930: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6934u; }
        if (ctx->pc != 0x2D6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6934u; }
        if (ctx->pc != 0x2D6934u) { return; }
    }
    ctx->pc = 0x2D6934u;
label_2d6934:
    // 0x2d6934: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d6934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6938: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d6938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d693c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6940: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6944: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6944u;
    SET_GPR_U32(ctx, 31, 0x2D694Cu);
    ctx->pc = 0x2D6948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6944u;
            // 0x2d6948: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D694Cu; }
        if (ctx->pc != 0x2D694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D694Cu; }
        if (ctx->pc != 0x2D694Cu) { return; }
    }
    ctx->pc = 0x2D694Cu;
label_2d694c:
    // 0x2d694c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d694cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6950: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6954: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6958: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2d6958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d695c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2d695cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d6960: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6960u;
    SET_GPR_U32(ctx, 31, 0x2D6968u);
    ctx->pc = 0x2D6964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6960u;
            // 0x2d6964: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6968u; }
        if (ctx->pc != 0x2D6968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6968u; }
        if (ctx->pc != 0x2D6968u) { return; }
    }
    ctx->pc = 0x2D6968u;
label_2d6968:
    // 0x2d6968: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2d6968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d696c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d6970: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x2d6970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2d6974: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6978: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6978u;
    SET_GPR_U32(ctx, 31, 0x2D6980u);
    ctx->pc = 0x2D697Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6978u;
            // 0x2d697c: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6980u; }
        if (ctx->pc != 0x2D6980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6980u; }
        if (ctx->pc != 0x2D6980u) { return; }
    }
    ctx->pc = 0x2D6980u;
label_2d6980:
    // 0x2d6980: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d6980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d6984: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d6984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d6988: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d698c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d698cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6990: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6990u;
    SET_GPR_U32(ctx, 31, 0x2D6998u);
    ctx->pc = 0x2D6994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6990u;
            // 0x2d6994: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6998u; }
        if (ctx->pc != 0x2D6998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6998u; }
        if (ctx->pc != 0x2D6998u) { return; }
    }
    ctx->pc = 0x2D6998u;
label_2d6998:
    // 0x2d6998: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d699c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69a0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d69a4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2d69a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d69a8: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2d69a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d69ac: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D69ACu;
    SET_GPR_U32(ctx, 31, 0x2D69B4u);
    ctx->pc = 0x2D69B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D69ACu;
            // 0x2d69b0: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69B4u; }
        if (ctx->pc != 0x2D69B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69B4u; }
        if (ctx->pc != 0x2D69B4u) { return; }
    }
    ctx->pc = 0x2D69B4u;
label_2d69b4:
    // 0x2d69b4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2d69b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d69b8: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2d69b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2d69bc: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x2d69bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2d69c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d69c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d69c4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D69C4u;
    SET_GPR_U32(ctx, 31, 0x2D69CCu);
    ctx->pc = 0x2D69C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D69C4u;
            // 0x2d69c8: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69CCu; }
        if (ctx->pc != 0x2D69CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69CCu; }
        if (ctx->pc != 0x2D69CCu) { return; }
    }
    ctx->pc = 0x2D69CCu;
label_2d69cc:
    // 0x2d69cc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d69ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d69d0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d69d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d69d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d69d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D69DCu;
    SET_GPR_U32(ctx, 31, 0x2D69E4u);
    ctx->pc = 0x2D69E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D69DCu;
            // 0x2d69e0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69E4u; }
        if (ctx->pc != 0x2D69E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69E4u; }
        if (ctx->pc != 0x2D69E4u) { return; }
    }
    ctx->pc = 0x2D69E4u;
label_2d69e4:
    // 0x2d69e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d69e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d69e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69ec: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d69f0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2d69f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d69f4: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x2d69f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d69f8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D69F8u;
    SET_GPR_U32(ctx, 31, 0x2D6A00u);
    ctx->pc = 0x2D69FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D69F8u;
            // 0x2d69fc: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A00u; }
        if (ctx->pc != 0x2D6A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A00u; }
        if (ctx->pc != 0x2D6A00u) { return; }
    }
    ctx->pc = 0x2D6A00u;
label_2d6a00:
    // 0x2d6a00: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2d6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d6a04: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2d6a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2d6a08: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x2d6a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2d6a0c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6a10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6A10u;
    SET_GPR_U32(ctx, 31, 0x2D6A18u);
    ctx->pc = 0x2D6A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6A10u;
            // 0x2d6a14: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A18u; }
        if (ctx->pc != 0x2D6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A18u; }
        if (ctx->pc != 0x2D6A18u) { return; }
    }
    ctx->pc = 0x2D6A18u;
label_2d6a18:
    // 0x2d6a18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a1c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2d6a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d6a24: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d6a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a28: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6A28u;
    SET_GPR_U32(ctx, 31, 0x2D6A30u);
    ctx->pc = 0x2D6A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6A28u;
            // 0x2d6a2c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A30u; }
        if (ctx->pc != 0x2D6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A30u; }
        if (ctx->pc != 0x2D6A30u) { return; }
    }
    ctx->pc = 0x2D6A30u;
label_2d6a30:
    // 0x2d6a30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6a34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a38: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6a3c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2d6a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d6a40: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2d6a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d6a44: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6A44u;
    SET_GPR_U32(ctx, 31, 0x2D6A4Cu);
    ctx->pc = 0x2D6A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6A44u;
            // 0x2d6a48: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A4Cu; }
        if (ctx->pc != 0x2D6A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A4Cu; }
        if (ctx->pc != 0x2D6A4Cu) { return; }
    }
    ctx->pc = 0x2D6A4Cu;
label_2d6a4c:
    // 0x2d6a4c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2d6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d6a50: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d6a54: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d6a58: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6a5c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A64u);
    ctx->pc = 0x2D6A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6A5Cu;
            // 0x2d6a60: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A64u; }
        if (ctx->pc != 0x2D6A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A64u; }
        if (ctx->pc != 0x2D6A64u) { return; }
    }
    ctx->pc = 0x2D6A64u;
label_2d6a64:
    // 0x2d6a64: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d6a68: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d6a6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d6a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a70: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6a74: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6A74u;
    SET_GPR_U32(ctx, 31, 0x2D6A7Cu);
    ctx->pc = 0x2D6A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6A74u;
            // 0x2d6a78: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A7Cu; }
        if (ctx->pc != 0x2D6A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A7Cu; }
        if (ctx->pc != 0x2D6A7Cu) { return; }
    }
    ctx->pc = 0x2D6A7Cu;
label_2d6a7c:
    // 0x2d6a7c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6a80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a84: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6a88: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2d6a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d6a8c: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2d6a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d6a90: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6A90u;
    SET_GPR_U32(ctx, 31, 0x2D6A98u);
    ctx->pc = 0x2D6A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6A90u;
            // 0x2d6a94: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A98u; }
        if (ctx->pc != 0x2D6A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6A98u; }
        if (ctx->pc != 0x2D6A98u) { return; }
    }
    ctx->pc = 0x2D6A98u;
label_2d6a98:
    // 0x2d6a98: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2d6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d6a9c: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2d6a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2d6aa0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d6aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d6aa4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2d6aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d6aa8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6AA8u;
    SET_GPR_U32(ctx, 31, 0x2D6AB0u);
    ctx->pc = 0x2D6AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6AA8u;
            // 0x2d6aac: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AB0u; }
        if (ctx->pc != 0x2D6AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AB0u; }
        if (ctx->pc != 0x2D6AB0u) { return; }
    }
    ctx->pc = 0x2D6AB0u;
label_2d6ab0:
    // 0x2d6ab0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d6ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ab4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d6ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ab8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d6abc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d6abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ac0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6AC0u;
    SET_GPR_U32(ctx, 31, 0x2D6AC8u);
    ctx->pc = 0x2D6AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6AC0u;
            // 0x2d6ac4: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AC8u; }
        if (ctx->pc != 0x2D6AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AC8u; }
        if (ctx->pc != 0x2D6AC8u) { return; }
    }
    ctx->pc = 0x2D6AC8u;
label_2d6ac8:
    // 0x2d6ac8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6acc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ad0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6ad4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2d6ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d6ad8: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2d6ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d6adc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6ADCu;
    SET_GPR_U32(ctx, 31, 0x2D6AE4u);
    ctx->pc = 0x2D6AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6ADCu;
            // 0x2d6ae0: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AE4u; }
        if (ctx->pc != 0x2D6AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AE4u; }
        if (ctx->pc != 0x2D6AE4u) { return; }
    }
    ctx->pc = 0x2D6AE4u;
label_2d6ae4:
    // 0x2d6ae4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2d6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d6ae8: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2d6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2d6aec: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2d6aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2d6af0: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6af4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6AF4u;
    SET_GPR_U32(ctx, 31, 0x2D6AFCu);
    ctx->pc = 0x2D6AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6AF4u;
            // 0x2d6af8: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AFCu; }
        if (ctx->pc != 0x2D6AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AFCu; }
        if (ctx->pc != 0x2D6AFCu) { return; }
    }
    ctx->pc = 0x2D6AFCu;
label_2d6afc:
    // 0x2d6afc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d6afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d6b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b04: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d6b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d6b08: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2d6b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6b0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2D6B14u);
    ctx->pc = 0x2D6B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B0Cu;
            // 0x2d6b10: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B14u; }
        if (ctx->pc != 0x2D6B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B14u; }
        if (ctx->pc != 0x2D6B14u) { return; }
    }
    ctx->pc = 0x2D6B14u;
label_2d6b14:
    // 0x2d6b14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d6b18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d6b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b1c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d6b20: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2d6b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d6b24: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d6b28: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D6B28u;
    SET_GPR_U32(ctx, 31, 0x2D6B30u);
    ctx->pc = 0x2D6B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B28u;
            // 0x2d6b2c: 0x27a801c8  addiu       $t0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B30u; }
        if (ctx->pc != 0x2D6B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6B30u; }
        if (ctx->pc != 0x2D6B30u) { return; }
    }
    ctx->pc = 0x2D6B30u;
label_2d6b30:
    // 0x2d6b30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d6b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d6b34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d6b34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d6b38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d6b38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d6b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d6b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6b44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d6b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6B54u;
            // 0x2d6b58: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6B5Cu;
}
