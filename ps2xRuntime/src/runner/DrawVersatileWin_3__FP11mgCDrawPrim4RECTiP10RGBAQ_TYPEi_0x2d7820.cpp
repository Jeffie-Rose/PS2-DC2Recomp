#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawVersatileWin_3__FP11mgCDrawPrim4RECTiP10RGBAQ_TYPEi
// Address: 0x2d7820 - 0x2d7e60
void DrawVersatileWin_3__FP11mgCDrawPrim4RECTiP10RGBAQ_TYPEi_0x2d7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawVersatileWin_3__FP11mgCDrawPrim4RECTiP10RGBAQ_TYPEi_0x2d7820");
#endif

    switch (ctx->pc) {
        case 0x2d788cu: goto label_2d788c;
        case 0x2d7900u: goto label_2d7900;
        case 0x2d7918u: goto label_2d7918;
        case 0x2d7934u: goto label_2d7934;
        case 0x2d795cu: goto label_2d795c;
        case 0x2d7974u: goto label_2d7974;
        case 0x2d7990u: goto label_2d7990;
        case 0x2d79b8u: goto label_2d79b8;
        case 0x2d79d0u: goto label_2d79d0;
        case 0x2d79ecu: goto label_2d79ec;
        case 0x2d7a14u: goto label_2d7a14;
        case 0x2d7a2cu: goto label_2d7a2c;
        case 0x2d7a48u: goto label_2d7a48;
        case 0x2d7a98u: goto label_2d7a98;
        case 0x2d7ac0u: goto label_2d7ac0;
        case 0x2d7ad8u: goto label_2d7ad8;
        case 0x2d7af4u: goto label_2d7af4;
        case 0x2d7b1cu: goto label_2d7b1c;
        case 0x2d7b34u: goto label_2d7b34;
        case 0x2d7b50u: goto label_2d7b50;
        case 0x2d7b78u: goto label_2d7b78;
        case 0x2d7b90u: goto label_2d7b90;
        case 0x2d7bacu: goto label_2d7bac;
        case 0x2d7bd4u: goto label_2d7bd4;
        case 0x2d7becu: goto label_2d7bec;
        case 0x2d7c08u: goto label_2d7c08;
        case 0x2d7c30u: goto label_2d7c30;
        case 0x2d7c48u: goto label_2d7c48;
        case 0x2d7c64u: goto label_2d7c64;
        case 0x2d7c8cu: goto label_2d7c8c;
        case 0x2d7ca4u: goto label_2d7ca4;
        case 0x2d7cc0u: goto label_2d7cc0;
        case 0x2d7ce8u: goto label_2d7ce8;
        case 0x2d7d00u: goto label_2d7d00;
        case 0x2d7d1cu: goto label_2d7d1c;
        case 0x2d7d44u: goto label_2d7d44;
        case 0x2d7d5cu: goto label_2d7d5c;
        case 0x2d7d78u: goto label_2d7d78;
        case 0x2d7da0u: goto label_2d7da0;
        case 0x2d7db8u: goto label_2d7db8;
        case 0x2d7dd4u: goto label_2d7dd4;
        case 0x2d7dfcu: goto label_2d7dfc;
        case 0x2d7e14u: goto label_2d7e14;
        case 0x2d7e30u: goto label_2d7e30;
        default: break;
    }

    ctx->pc = 0x2d7820u;

    // 0x2d7820: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2d7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x2d7824: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d7824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d7828: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2d7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d782c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d7830: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d7830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d7834: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d7838: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d783c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d7840: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d7840u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7844: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d7844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d7848: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d7848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d784c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d7850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7858: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x2d7858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
    // 0x2d785c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d785cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7860: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7868: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d7868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d786c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7870: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7874: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d7874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d7878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d787c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d787cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7880: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7884: 0xc054514  jal         func_151450
    ctx->pc = 0x2D7884u;
    SET_GPR_U32(ctx, 31, 0x2D788Cu);
    ctx->pc = 0x2D7888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7884u;
            // 0x2d7888: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D788Cu; }
        if (ctx->pc != 0x2D788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D788Cu; }
        if (ctx->pc != 0x2D788Cu) { return; }
    }
    ctx->pc = 0x2D788Cu;
label_2d788c:
    // 0x2d788c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d788cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7890: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d7890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d7894: 0x8c256fd0  lw          $a1, 0x6FD0($at)
    ctx->pc = 0x2d7894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28624)));
    // 0x2d7898: 0x261efff9  addiu       $fp, $s0, -0x7
    ctx->pc = 0x2d7898u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x2d789c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d78a0: 0x26170007  addiu       $s7, $s0, 0x7
    ctx->pc = 0x2d78a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2d78a4: 0x8fb300e4  lw          $s3, 0xE4($sp)
    ctx->pc = 0x2d78a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2d78a8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d78ac: 0x8fa800ec  lw          $t0, 0xEC($sp)
    ctx->pc = 0x2d78acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2d78b0: 0x2472ffd2  addiu       $s2, $v1, -0x2E
    ctx->pc = 0x2d78b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967250));
    // 0x2d78b4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d78b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d78b8: 0x8c266fd4  lw          $a2, 0x6FD4($at)
    ctx->pc = 0x2d78b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28628)));
    // 0x2d78bc: 0x24500017  addiu       $s0, $v0, 0x17
    ctx->pc = 0x2d78bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    // 0x2d78c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d78c4: 0x2451ffe9  addiu       $s1, $v0, -0x17
    ctx->pc = 0x2d78c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x2d78c8: 0x2681821  addu        $v1, $s3, $t0
    ctx->pc = 0x2d78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2d78cc: 0x26620019  addiu       $v0, $s3, 0x19
    ctx->pc = 0x2d78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25));
    // 0x2d78d0: 0x2476ffe7  addiu       $s6, $v1, -0x19
    ctx->pc = 0x2d78d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x2d78d4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2d78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2d78d8: 0x25020019  addiu       $v0, $t0, 0x19
    ctx->pc = 0x2d78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 25));
    // 0x2d78dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d78dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d78e0: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x2d78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2d78e4: 0x8c276fd8  lw          $a3, 0x6FD8($at)
    ctx->pc = 0x2d78e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28632)));
    // 0x2d78e8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2d78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2d78ec: 0x2d71023  subu        $v0, $s6, $s7
    ctx->pc = 0x2d78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x2d78f0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d78f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d78f4: 0x8c286fdc  lw          $t0, 0x6FDC($at)
    ctx->pc = 0x2d78f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28636)));
    // 0x2d78f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D78F8u;
    SET_GPR_U32(ctx, 31, 0x2D7900u);
    ctx->pc = 0x2D78FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D78F8u;
            // 0x2d78fc: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7900u; }
        if (ctx->pc != 0x2D7900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7900u; }
        if (ctx->pc != 0x2D7900u) { return; }
    }
    ctx->pc = 0x2D7900u;
label_2d7900:
    // 0x2d7900: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d7900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7904: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2d7904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d7908: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d7908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d790c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d790cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7910: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7910u;
    SET_GPR_U32(ctx, 31, 0x2D7918u);
    ctx->pc = 0x2D7914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7910u;
            // 0x2d7914: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7918u; }
        if (ctx->pc != 0x2D7918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7918u; }
        if (ctx->pc != 0x2D7918u) { return; }
    }
    ctx->pc = 0x2D7918u;
label_2d7918:
    // 0x2d7918: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d791c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7920: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7924: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2d7924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d7928: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x2d7928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d792c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D792Cu;
    SET_GPR_U32(ctx, 31, 0x2D7934u);
    ctx->pc = 0x2D7930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D792Cu;
            // 0x2d7930: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7934u; }
        if (ctx->pc != 0x2D7934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7934u; }
        if (ctx->pc != 0x2D7934u) { return; }
    }
    ctx->pc = 0x2D7934u;
label_2d7934:
    // 0x2d7934: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7938: 0x8c256fe0  lw          $a1, 0x6FE0($at)
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28640)));
    // 0x2d793c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d793cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7940: 0x8c266fe4  lw          $a2, 0x6FE4($at)
    ctx->pc = 0x2d7940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28644)));
    // 0x2d7944: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7948: 0x8c276fe8  lw          $a3, 0x6FE8($at)
    ctx->pc = 0x2d7948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28648)));
    // 0x2d794c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7950: 0x8c286fec  lw          $t0, 0x6FEC($at)
    ctx->pc = 0x2d7950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28652)));
    // 0x2d7954: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7954u;
    SET_GPR_U32(ctx, 31, 0x2D795Cu);
    ctx->pc = 0x2D7958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7954u;
            // 0x2d7958: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D795Cu; }
        if (ctx->pc != 0x2D795Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D795Cu; }
        if (ctx->pc != 0x2D795Cu) { return; }
    }
    ctx->pc = 0x2D795Cu;
label_2d795c:
    // 0x2d795c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2d795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d7960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7964: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d7964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7968: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d7968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d796c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D796Cu;
    SET_GPR_U32(ctx, 31, 0x2D7974u);
    ctx->pc = 0x2D7970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D796Cu;
            // 0x2d7970: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7974u; }
        if (ctx->pc != 0x2D7974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7974u; }
        if (ctx->pc != 0x2D7974u) { return; }
    }
    ctx->pc = 0x2D7974u;
label_2d7974:
    // 0x2d7974: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7978: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d797c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7980: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2d7980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d7984: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x2d7984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d7988: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7988u;
    SET_GPR_U32(ctx, 31, 0x2D7990u);
    ctx->pc = 0x2D798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7988u;
            // 0x2d798c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7990u; }
        if (ctx->pc != 0x2D7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7990u; }
        if (ctx->pc != 0x2D7990u) { return; }
    }
    ctx->pc = 0x2D7990u;
label_2d7990:
    // 0x2d7990: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7994: 0x8c256ff0  lw          $a1, 0x6FF0($at)
    ctx->pc = 0x2d7994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28656)));
    // 0x2d7998: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d799c: 0x8c266ff4  lw          $a2, 0x6FF4($at)
    ctx->pc = 0x2d799cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28660)));
    // 0x2d79a0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d79a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d79a4: 0x8c276ff8  lw          $a3, 0x6FF8($at)
    ctx->pc = 0x2d79a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28664)));
    // 0x2d79a8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d79a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d79ac: 0x8c286ffc  lw          $t0, 0x6FFC($at)
    ctx->pc = 0x2d79acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28668)));
    // 0x2d79b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D79B0u;
    SET_GPR_U32(ctx, 31, 0x2D79B8u);
    ctx->pc = 0x2D79B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D79B0u;
            // 0x2d79b4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D79B8u; }
        if (ctx->pc != 0x2D79B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D79B8u; }
        if (ctx->pc != 0x2D79B8u) { return; }
    }
    ctx->pc = 0x2D79B8u;
label_2d79b8:
    // 0x2d79b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d79b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2d79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d79c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d79c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79c4: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d79c8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D79C8u;
    SET_GPR_U32(ctx, 31, 0x2D79D0u);
    ctx->pc = 0x2D79CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D79C8u;
            // 0x2d79cc: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D79D0u; }
        if (ctx->pc != 0x2D79D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D79D0u; }
        if (ctx->pc != 0x2D79D0u) { return; }
    }
    ctx->pc = 0x2D79D0u;
label_2d79d0:
    // 0x2d79d0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d79d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d79d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79d8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d79dc: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2d79dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d79e0: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x2d79e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d79e4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D79E4u;
    SET_GPR_U32(ctx, 31, 0x2D79ECu);
    ctx->pc = 0x2D79E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D79E4u;
            // 0x2d79e8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D79ECu; }
        if (ctx->pc != 0x2D79ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D79ECu; }
        if (ctx->pc != 0x2D79ECu) { return; }
    }
    ctx->pc = 0x2D79ECu;
label_2d79ec:
    // 0x2d79ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d79ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d79f0: 0x8c257000  lw          $a1, 0x7000($at)
    ctx->pc = 0x2d79f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28672)));
    // 0x2d79f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d79f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d79f8: 0x8c267004  lw          $a2, 0x7004($at)
    ctx->pc = 0x2d79f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28676)));
    // 0x2d79fc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d79fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7a00: 0x8c277008  lw          $a3, 0x7008($at)
    ctx->pc = 0x2d7a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28680)));
    // 0x2d7a04: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7a08: 0x8c28700c  lw          $t0, 0x700C($at)
    ctx->pc = 0x2d7a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28684)));
    // 0x2d7a0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D7A14u);
    ctx->pc = 0x2D7A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7A0Cu;
            // 0x2d7a10: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A14u; }
        if (ctx->pc != 0x2D7A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A14u; }
        if (ctx->pc != 0x2D7A14u) { return; }
    }
    ctx->pc = 0x2D7A14u;
label_2d7a14:
    // 0x2d7a14: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7a18: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2d7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d7a1c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7a20: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7a24: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7A24u;
    SET_GPR_U32(ctx, 31, 0x2D7A2Cu);
    ctx->pc = 0x2D7A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7A24u;
            // 0x2d7a28: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A2Cu; }
        if (ctx->pc != 0x2D7A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A2Cu; }
        if (ctx->pc != 0x2D7A2Cu) { return; }
    }
    ctx->pc = 0x2D7A2Cu;
label_2d7a2c:
    // 0x2d7a2c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7a30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a34: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7a38: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2d7a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d7a3c: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x2d7a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d7a40: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7A40u;
    SET_GPR_U32(ctx, 31, 0x2D7A48u);
    ctx->pc = 0x2D7A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7A40u;
            // 0x2d7a44: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A48u; }
        if (ctx->pc != 0x2D7A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A48u; }
        if (ctx->pc != 0x2D7A48u) { return; }
    }
    ctx->pc = 0x2D7A48u;
label_2d7a48:
    // 0x2d7a48: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7a4c: 0x2604fff6  addiu       $a0, $s0, -0xA
    ctx->pc = 0x2d7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x2d7a50: 0x26460016  addiu       $a2, $s2, 0x16
    ctx->pc = 0x2d7a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 22));
    // 0x2d7a54: 0x2445fff7  addiu       $a1, $v0, -0x9
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x2d7a58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7a5c: 0x2447000d  addiu       $a3, $v0, 0xD
    ctx->pc = 0x2d7a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x2d7a60: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2d7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2d7a64: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d7a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d7a6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7a70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7a74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d7a78: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7A78u;
    {
        const bool branch_taken_0x2d7a78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D7A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7A78u;
            // 0x2d7a7c: 0x259c3  sra         $t3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a78) {
            ctx->pc = 0x2D7A88u;
            goto label_2d7a88;
        }
    }
    ctx->pc = 0x2D7A80u;
    // 0x2d7a80: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x2d7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x2d7a84: 0x259c3  sra         $t3, $v0, 7
    ctx->pc = 0x2d7a84u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
label_2d7a88:
    // 0x2d7a88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d7a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a90: 0xc0545fc  jal         func_1517F0
    ctx->pc = 0x2D7A90u;
    SET_GPR_U32(ctx, 31, 0x2D7A98u);
    ctx->pc = 0x2D7A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7A90u;
            // 0x2d7a94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1517F0u;
    if (runtime->hasFunction(0x1517F0u)) {
        auto targetFn = runtime->lookupFunction(0x1517F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A98u; }
        if (ctx->pc != 0x2D7A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FillRect__Fiiiiiiii_0x1517f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7A98u; }
        if (ctx->pc != 0x2D7A98u) { return; }
    }
    ctx->pc = 0x2D7A98u;
label_2d7a98:
    // 0x2d7a98: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7a9c: 0x8c257020  lw          $a1, 0x7020($at)
    ctx->pc = 0x2d7a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28704)));
    // 0x2d7aa0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7aa4: 0x8c267024  lw          $a2, 0x7024($at)
    ctx->pc = 0x2d7aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28708)));
    // 0x2d7aa8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7aac: 0x8c277028  lw          $a3, 0x7028($at)
    ctx->pc = 0x2d7aacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28712)));
    // 0x2d7ab0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7ab4: 0x8c28702c  lw          $t0, 0x702C($at)
    ctx->pc = 0x2d7ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28716)));
    // 0x2d7ab8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7AB8u;
    SET_GPR_U32(ctx, 31, 0x2D7AC0u);
    ctx->pc = 0x2D7ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7AB8u;
            // 0x2d7abc: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7AC0u; }
        if (ctx->pc != 0x2D7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7AC0u; }
        if (ctx->pc != 0x2D7AC0u) { return; }
    }
    ctx->pc = 0x2D7AC0u;
label_2d7ac0:
    // 0x2d7ac0: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7ac4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2d7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d7ac8: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2d7ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ad0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7AD0u;
    SET_GPR_U32(ctx, 31, 0x2D7AD8u);
    ctx->pc = 0x2D7AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7AD0u;
            // 0x2d7ad4: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7AD8u; }
        if (ctx->pc != 0x2D7AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7AD8u; }
        if (ctx->pc != 0x2D7AD8u) { return; }
    }
    ctx->pc = 0x2D7AD8u;
label_2d7ad8:
    // 0x2d7ad8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7adc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ae0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7ae4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2d7ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d7ae8: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2d7ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d7aec: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7AECu;
    SET_GPR_U32(ctx, 31, 0x2D7AF4u);
    ctx->pc = 0x2D7AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7AECu;
            // 0x2d7af0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7AF4u; }
        if (ctx->pc != 0x2D7AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7AF4u; }
        if (ctx->pc != 0x2D7AF4u) { return; }
    }
    ctx->pc = 0x2D7AF4u;
label_2d7af4:
    // 0x2d7af4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7af8: 0x8c257030  lw          $a1, 0x7030($at)
    ctx->pc = 0x2d7af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28720)));
    // 0x2d7afc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b00: 0x8c267034  lw          $a2, 0x7034($at)
    ctx->pc = 0x2d7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28724)));
    // 0x2d7b04: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b08: 0x8c277038  lw          $a3, 0x7038($at)
    ctx->pc = 0x2d7b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28728)));
    // 0x2d7b0c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b10: 0x8c28703c  lw          $t0, 0x703C($at)
    ctx->pc = 0x2d7b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28732)));
    // 0x2d7b14: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7B14u;
    SET_GPR_U32(ctx, 31, 0x2D7B1Cu);
    ctx->pc = 0x2D7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7B14u;
            // 0x2d7b18: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B1Cu; }
        if (ctx->pc != 0x2D7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B1Cu; }
        if (ctx->pc != 0x2D7B1Cu) { return; }
    }
    ctx->pc = 0x2D7B1Cu;
label_2d7b1c:
    // 0x2d7b1c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7b20: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2d7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d7b24: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d7b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b28: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7b2c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D7B34u);
    ctx->pc = 0x2D7B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7B2Cu;
            // 0x2d7b30: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B34u; }
        if (ctx->pc != 0x2D7B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B34u; }
        if (ctx->pc != 0x2D7B34u) { return; }
    }
    ctx->pc = 0x2D7B34u;
label_2d7b34:
    // 0x2d7b34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7b38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b3c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7b40: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2d7b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d7b44: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x2d7b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d7b48: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7B48u;
    SET_GPR_U32(ctx, 31, 0x2D7B50u);
    ctx->pc = 0x2D7B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7B48u;
            // 0x2d7b4c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B50u; }
        if (ctx->pc != 0x2D7B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B50u; }
        if (ctx->pc != 0x2D7B50u) { return; }
    }
    ctx->pc = 0x2D7B50u;
label_2d7b50:
    // 0x2d7b50: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b54: 0x8c257040  lw          $a1, 0x7040($at)
    ctx->pc = 0x2d7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28736)));
    // 0x2d7b58: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b5c: 0x8c267044  lw          $a2, 0x7044($at)
    ctx->pc = 0x2d7b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28740)));
    // 0x2d7b60: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b64: 0x8c277048  lw          $a3, 0x7048($at)
    ctx->pc = 0x2d7b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28744)));
    // 0x2d7b68: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7b6c: 0x8c28704c  lw          $t0, 0x704C($at)
    ctx->pc = 0x2d7b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28748)));
    // 0x2d7b70: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7B70u;
    SET_GPR_U32(ctx, 31, 0x2D7B78u);
    ctx->pc = 0x2D7B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7B70u;
            // 0x2d7b74: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B78u; }
        if (ctx->pc != 0x2D7B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B78u; }
        if (ctx->pc != 0x2D7B78u) { return; }
    }
    ctx->pc = 0x2D7B78u;
label_2d7b78:
    // 0x2d7b78: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2d7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d7b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b80: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d7b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b88: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7B88u;
    SET_GPR_U32(ctx, 31, 0x2D7B90u);
    ctx->pc = 0x2D7B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7B88u;
            // 0x2d7b8c: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B90u; }
        if (ctx->pc != 0x2D7B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B90u; }
        if (ctx->pc != 0x2D7B90u) { return; }
    }
    ctx->pc = 0x2D7B90u;
label_2d7b90:
    // 0x2d7b90: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7b94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b98: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7b9c: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2d7b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d7ba0: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x2d7ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2d7ba4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7BA4u;
    SET_GPR_U32(ctx, 31, 0x2D7BACu);
    ctx->pc = 0x2D7BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7BA4u;
            // 0x2d7ba8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BACu; }
        if (ctx->pc != 0x2D7BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BACu; }
        if (ctx->pc != 0x2D7BACu) { return; }
    }
    ctx->pc = 0x2D7BACu;
label_2d7bac:
    // 0x2d7bac: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7bb0: 0x8c257050  lw          $a1, 0x7050($at)
    ctx->pc = 0x2d7bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28752)));
    // 0x2d7bb4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7bb8: 0x8c267054  lw          $a2, 0x7054($at)
    ctx->pc = 0x2d7bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28756)));
    // 0x2d7bbc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7bc0: 0x8c277058  lw          $a3, 0x7058($at)
    ctx->pc = 0x2d7bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28760)));
    // 0x2d7bc4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7bc8: 0x8c28705c  lw          $t0, 0x705C($at)
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28764)));
    // 0x2d7bcc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7BCCu;
    SET_GPR_U32(ctx, 31, 0x2D7BD4u);
    ctx->pc = 0x2D7BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7BCCu;
            // 0x2d7bd0: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BD4u; }
        if (ctx->pc != 0x2D7BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BD4u; }
        if (ctx->pc != 0x2D7BD4u) { return; }
    }
    ctx->pc = 0x2D7BD4u;
label_2d7bd4:
    // 0x2d7bd4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d7bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bd8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2d7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d7bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7be0: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7be4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7BE4u;
    SET_GPR_U32(ctx, 31, 0x2D7BECu);
    ctx->pc = 0x2D7BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7BE4u;
            // 0x2d7be8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BECu; }
        if (ctx->pc != 0x2D7BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BECu; }
        if (ctx->pc != 0x2D7BECu) { return; }
    }
    ctx->pc = 0x2D7BECu;
label_2d7bec:
    // 0x2d7bec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7bf0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bf4: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7bf8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2d7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2d7bfc: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x2d7bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2d7c00: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7C00u;
    SET_GPR_U32(ctx, 31, 0x2D7C08u);
    ctx->pc = 0x2D7C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C00u;
            // 0x2d7c04: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C08u; }
        if (ctx->pc != 0x2D7C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C08u; }
        if (ctx->pc != 0x2D7C08u) { return; }
    }
    ctx->pc = 0x2D7C08u;
label_2d7c08:
    // 0x2d7c08: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c0c: 0x8c257060  lw          $a1, 0x7060($at)
    ctx->pc = 0x2d7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28768)));
    // 0x2d7c10: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c14: 0x8c267064  lw          $a2, 0x7064($at)
    ctx->pc = 0x2d7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28772)));
    // 0x2d7c18: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c1c: 0x8c277068  lw          $a3, 0x7068($at)
    ctx->pc = 0x2d7c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28776)));
    // 0x2d7c20: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c24: 0x8c28706c  lw          $t0, 0x706C($at)
    ctx->pc = 0x2d7c24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28780)));
    // 0x2d7c28: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7C28u;
    SET_GPR_U32(ctx, 31, 0x2D7C30u);
    ctx->pc = 0x2D7C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C28u;
            // 0x2d7c2c: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C30u; }
        if (ctx->pc != 0x2D7C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C30u; }
        if (ctx->pc != 0x2D7C30u) { return; }
    }
    ctx->pc = 0x2D7C30u;
label_2d7c30:
    // 0x2d7c30: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7c34: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2d7c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d7c38: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x2d7c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d7c3c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d7c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c40: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7C40u;
    SET_GPR_U32(ctx, 31, 0x2D7C48u);
    ctx->pc = 0x2D7C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C40u;
            // 0x2d7c44: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C48u; }
        if (ctx->pc != 0x2D7C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C48u; }
        if (ctx->pc != 0x2D7C48u) { return; }
    }
    ctx->pc = 0x2D7C48u;
label_2d7c48:
    // 0x2d7c48: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7c4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c50: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7c54: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x2d7c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2d7c58: 0x27a70200  addiu       $a3, $sp, 0x200
    ctx->pc = 0x2d7c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2d7c5c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C64u);
    ctx->pc = 0x2D7C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C5Cu;
            // 0x2d7c60: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C64u; }
        if (ctx->pc != 0x2D7C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C64u; }
        if (ctx->pc != 0x2D7C64u) { return; }
    }
    ctx->pc = 0x2D7C64u;
label_2d7c64:
    // 0x2d7c64: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c68: 0x8c257070  lw          $a1, 0x7070($at)
    ctx->pc = 0x2d7c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28784)));
    // 0x2d7c6c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c70: 0x8c267074  lw          $a2, 0x7074($at)
    ctx->pc = 0x2d7c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28788)));
    // 0x2d7c74: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c78: 0x8c277078  lw          $a3, 0x7078($at)
    ctx->pc = 0x2d7c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28792)));
    // 0x2d7c7c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7c80: 0x8c28707c  lw          $t0, 0x707C($at)
    ctx->pc = 0x2d7c80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28796)));
    // 0x2d7c84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7C84u;
    SET_GPR_U32(ctx, 31, 0x2D7C8Cu);
    ctx->pc = 0x2D7C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C84u;
            // 0x2d7c88: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C8Cu; }
        if (ctx->pc != 0x2D7C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C8Cu; }
        if (ctx->pc != 0x2D7C8Cu) { return; }
    }
    ctx->pc = 0x2D7C8Cu;
label_2d7c8c:
    // 0x2d7c8c: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x2d7c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d7c90: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2d7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d7c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c98: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d7c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c9c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D7CA4u);
    ctx->pc = 0x2D7CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C9Cu;
            // 0x2d7ca0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7CA4u; }
        if (ctx->pc != 0x2D7CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7CA4u; }
        if (ctx->pc != 0x2D7CA4u) { return; }
    }
    ctx->pc = 0x2D7CA4u;
label_2d7ca4:
    // 0x2d7ca4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7ca8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cac: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7cb0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x2d7cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2d7cb4: 0x27a70220  addiu       $a3, $sp, 0x220
    ctx->pc = 0x2d7cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2d7cb8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7CB8u;
    SET_GPR_U32(ctx, 31, 0x2D7CC0u);
    ctx->pc = 0x2D7CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7CB8u;
            // 0x2d7cbc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7CC0u; }
        if (ctx->pc != 0x2D7CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7CC0u; }
        if (ctx->pc != 0x2D7CC0u) { return; }
    }
    ctx->pc = 0x2D7CC0u;
label_2d7cc0:
    // 0x2d7cc0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7cc4: 0x8c257080  lw          $a1, 0x7080($at)
    ctx->pc = 0x2d7cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28800)));
    // 0x2d7cc8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7ccc: 0x8c267084  lw          $a2, 0x7084($at)
    ctx->pc = 0x2d7cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28804)));
    // 0x2d7cd0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7cd4: 0x8c277088  lw          $a3, 0x7088($at)
    ctx->pc = 0x2d7cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28808)));
    // 0x2d7cd8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7cdc: 0x8c28708c  lw          $t0, 0x708C($at)
    ctx->pc = 0x2d7cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28812)));
    // 0x2d7ce0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7CE0u;
    SET_GPR_U32(ctx, 31, 0x2D7CE8u);
    ctx->pc = 0x2D7CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7CE0u;
            // 0x2d7ce4: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7CE8u; }
        if (ctx->pc != 0x2D7CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7CE8u; }
        if (ctx->pc != 0x2D7CE8u) { return; }
    }
    ctx->pc = 0x2D7CE8u;
label_2d7ce8:
    // 0x2d7ce8: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x2d7ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d7cec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d7cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cf0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2d7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d7cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cf8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7CF8u;
    SET_GPR_U32(ctx, 31, 0x2D7D00u);
    ctx->pc = 0x2D7CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7CF8u;
            // 0x2d7cfc: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D00u; }
        if (ctx->pc != 0x2D7D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D00u; }
        if (ctx->pc != 0x2D7D00u) { return; }
    }
    ctx->pc = 0x2D7D00u;
label_2d7d00:
    // 0x2d7d00: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7d04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d08: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7d0c: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x2d7d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2d7d10: 0x27a70240  addiu       $a3, $sp, 0x240
    ctx->pc = 0x2d7d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x2d7d14: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7D14u;
    SET_GPR_U32(ctx, 31, 0x2D7D1Cu);
    ctx->pc = 0x2D7D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D14u;
            // 0x2d7d18: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D1Cu; }
        if (ctx->pc != 0x2D7D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D1Cu; }
        if (ctx->pc != 0x2D7D1Cu) { return; }
    }
    ctx->pc = 0x2D7D1Cu;
label_2d7d1c:
    // 0x2d7d1c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d20: 0x8c257090  lw          $a1, 0x7090($at)
    ctx->pc = 0x2d7d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28816)));
    // 0x2d7d24: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d28: 0x8c267094  lw          $a2, 0x7094($at)
    ctx->pc = 0x2d7d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28820)));
    // 0x2d7d2c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d30: 0x8c277098  lw          $a3, 0x7098($at)
    ctx->pc = 0x2d7d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28824)));
    // 0x2d7d34: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d38: 0x8c28709c  lw          $t0, 0x709C($at)
    ctx->pc = 0x2d7d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28828)));
    // 0x2d7d3c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D44u);
    ctx->pc = 0x2D7D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D3Cu;
            // 0x2d7d40: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D44u; }
        if (ctx->pc != 0x2D7D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D44u; }
        if (ctx->pc != 0x2D7D44u) { return; }
    }
    ctx->pc = 0x2D7D44u;
label_2d7d44:
    // 0x2d7d44: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2d7d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7d48: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x2d7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2d7d4c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d7d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d50: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7d54: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7D54u;
    SET_GPR_U32(ctx, 31, 0x2D7D5Cu);
    ctx->pc = 0x2D7D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D54u;
            // 0x2d7d58: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D5Cu; }
        if (ctx->pc != 0x2D7D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D5Cu; }
        if (ctx->pc != 0x2D7D5Cu) { return; }
    }
    ctx->pc = 0x2D7D5Cu;
label_2d7d5c:
    // 0x2d7d5c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7d60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d64: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7d68: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x2d7d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2d7d6c: 0x27a70260  addiu       $a3, $sp, 0x260
    ctx->pc = 0x2d7d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2d7d70: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7D70u;
    SET_GPR_U32(ctx, 31, 0x2D7D78u);
    ctx->pc = 0x2D7D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D70u;
            // 0x2d7d74: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D78u; }
        if (ctx->pc != 0x2D7D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D78u; }
        if (ctx->pc != 0x2D7D78u) { return; }
    }
    ctx->pc = 0x2D7D78u;
label_2d7d78:
    // 0x2d7d78: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d7c: 0x8c2570a0  lw          $a1, 0x70A0($at)
    ctx->pc = 0x2d7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28832)));
    // 0x2d7d80: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d84: 0x8c2670a4  lw          $a2, 0x70A4($at)
    ctx->pc = 0x2d7d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28836)));
    // 0x2d7d88: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d8c: 0x8c2770a8  lw          $a3, 0x70A8($at)
    ctx->pc = 0x2d7d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28840)));
    // 0x2d7d90: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7d94: 0x8c2870ac  lw          $t0, 0x70AC($at)
    ctx->pc = 0x2d7d94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28844)));
    // 0x2d7d98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7D98u;
    SET_GPR_U32(ctx, 31, 0x2D7DA0u);
    ctx->pc = 0x2D7D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D98u;
            // 0x2d7d9c: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DA0u; }
        if (ctx->pc != 0x2D7DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DA0u; }
        if (ctx->pc != 0x2D7DA0u) { return; }
    }
    ctx->pc = 0x2D7DA0u;
label_2d7da0:
    // 0x2d7da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7da4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d7da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7da8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2d7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2d7dac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d7dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7db0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7DB0u;
    SET_GPR_U32(ctx, 31, 0x2D7DB8u);
    ctx->pc = 0x2D7DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DB0u;
            // 0x2d7db4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DB8u; }
        if (ctx->pc != 0x2D7DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DB8u; }
        if (ctx->pc != 0x2D7DB8u) { return; }
    }
    ctx->pc = 0x2D7DB8u;
label_2d7db8:
    // 0x2d7db8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7dbc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7dc0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7dc4: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x2d7dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2d7dc8: 0x27a70280  addiu       $a3, $sp, 0x280
    ctx->pc = 0x2d7dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2d7dcc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7DCCu;
    SET_GPR_U32(ctx, 31, 0x2D7DD4u);
    ctx->pc = 0x2D7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DCCu;
            // 0x2d7dd0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DD4u; }
        if (ctx->pc != 0x2D7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DD4u; }
        if (ctx->pc != 0x2D7DD4u) { return; }
    }
    ctx->pc = 0x2D7DD4u;
label_2d7dd4:
    // 0x2d7dd4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7dd8: 0x8c2570b0  lw          $a1, 0x70B0($at)
    ctx->pc = 0x2d7dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28848)));
    // 0x2d7ddc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7de0: 0x8c2670b4  lw          $a2, 0x70B4($at)
    ctx->pc = 0x2d7de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28852)));
    // 0x2d7de4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7de8: 0x8c2770b8  lw          $a3, 0x70B8($at)
    ctx->pc = 0x2d7de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28856)));
    // 0x2d7dec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7df0: 0x8c2870bc  lw          $t0, 0x70BC($at)
    ctx->pc = 0x2d7df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28860)));
    // 0x2d7df4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7DF4u;
    SET_GPR_U32(ctx, 31, 0x2D7DFCu);
    ctx->pc = 0x2D7DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DF4u;
            // 0x2d7df8: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DFCu; }
        if (ctx->pc != 0x2D7DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DFCu; }
        if (ctx->pc != 0x2D7DFCu) { return; }
    }
    ctx->pc = 0x2D7DFCu;
label_2d7dfc:
    // 0x2d7dfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e00: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d7e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e04: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2d7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2d7e08: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7e0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D7E14u);
    ctx->pc = 0x2D7E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E0Cu;
            // 0x2d7e10: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E14u; }
        if (ctx->pc != 0x2D7E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E14u; }
        if (ctx->pc != 0x2D7E14u) { return; }
    }
    ctx->pc = 0x2D7E14u;
label_2d7e14:
    // 0x2d7e14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7e18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e1c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d7e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e20: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7e24: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x2d7e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2d7e28: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7E28u;
    SET_GPR_U32(ctx, 31, 0x2D7E30u);
    ctx->pc = 0x2D7E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E28u;
            // 0x2d7e2c: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E30u; }
        if (ctx->pc != 0x2D7E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E30u; }
        if (ctx->pc != 0x2D7E30u) { return; }
    }
    ctx->pc = 0x2D7E30u;
label_2d7e30:
    // 0x2d7e30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d7e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7e34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d7e34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7e38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d7e38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7e3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d7e3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7e40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d7e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7e44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d7e44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7e48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d7e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7e4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d7e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7e50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E58u;
            // 0x2d7e5c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7E60u;
}
