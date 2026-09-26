#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__11CEffectCtrlFRC11CEffectCtrl
// Address: 0x181140 - 0x181490
void ps2___as__11CEffectCtrlFRC11CEffectCtrl_0x181140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__11CEffectCtrlFRC11CEffectCtrl_0x181140");
#endif

    switch (ctx->pc) {
        case 0x18115cu: goto label_18115c;
        case 0x181218u: goto label_181218;
        case 0x18122cu: goto label_18122c;
        case 0x181258u: goto label_181258;
        case 0x181264u: goto label_181264;
        case 0x181270u: goto label_181270;
        case 0x18127cu: goto label_18127c;
        case 0x181288u: goto label_181288;
        case 0x181294u: goto label_181294;
        case 0x1812c0u: goto label_1812c0;
        case 0x1812ccu: goto label_1812cc;
        case 0x1812d8u: goto label_1812d8;
        case 0x1812e4u: goto label_1812e4;
        case 0x181328u: goto label_181328;
        case 0x181334u: goto label_181334;
        case 0x181340u: goto label_181340;
        case 0x18134cu: goto label_18134c;
        case 0x181378u: goto label_181378;
        case 0x181384u: goto label_181384;
        case 0x181390u: goto label_181390;
        case 0x18139cu: goto label_18139c;
        case 0x181444u: goto label_181444;
        case 0x181468u: goto label_181468;
        default: break;
    }

    ctx->pc = 0x181140u;

    // 0x181140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18114c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181154: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181154u;
    SET_GPR_U32(ctx, 31, 0x18115Cu);
    ctx->pc = 0x181158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181154u;
            // 0x181158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18115Cu; }
        if (ctx->pc != 0x18115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18115Cu; }
        if (ctx->pc != 0x18115Cu) { return; }
    }
    ctx->pc = 0x18115Cu;
label_18115c:
    // 0x18115c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x181160: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x181164: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x181168: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x181168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x18116c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x181170: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x181170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x181174: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x181174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x181178: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x181178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x18117c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x18117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x181180: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x181180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x181184: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x181188: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x181188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x18118c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x181190: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x181190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x181194: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x181198: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x181198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x18119c: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x18119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1811a0: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x1811a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x1811a4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1811a8: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1811a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x1811ac: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1811acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1811b0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1811b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1811b4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1811b8: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1811b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x1811bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1811c0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1811c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1811c4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1811c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1811c8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1811c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1811cc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1811ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1811d0: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1811d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1811d4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1811d8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1811d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1811dc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1811e0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x1811e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x1811e4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1811e8: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1811e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x1811ec: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x1811ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1811f0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1811f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1811f4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1811f8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1811f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1811fc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1811fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181200: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x181200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x181204: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x181204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181208: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x181208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x18120c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x181210: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181210u;
    SET_GPR_U32(ctx, 31, 0x181218u);
    ctx->pc = 0x181214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181210u;
            // 0x181214: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181218u; }
        if (ctx->pc != 0x181218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181218u; }
        if (ctx->pc != 0x181218u) { return; }
    }
    ctx->pc = 0x181218u;
label_181218:
    // 0x181218: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18121c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x181220: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x181220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x181224: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181224u;
    SET_GPR_U32(ctx, 31, 0x18122Cu);
    ctx->pc = 0x181228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181224u;
            // 0x181228: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18122Cu; }
        if (ctx->pc != 0x18122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18122Cu; }
        if (ctx->pc != 0x18122Cu) { return; }
    }
    ctx->pc = 0x18122Cu;
label_18122c:
    // 0x18122c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x181230: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x181230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x181234: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x181234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x181238: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x181238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x18123c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x181240: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x181240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x181244: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x181248: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x181248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x18124c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x181250: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181250u;
    SET_GPR_U32(ctx, 31, 0x181258u);
    ctx->pc = 0x181254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181250u;
            // 0x181254: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181258u; }
        if (ctx->pc != 0x181258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181258u; }
        if (ctx->pc != 0x181258u) { return; }
    }
    ctx->pc = 0x181258u;
label_181258:
    // 0x181258: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x181258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x18125c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18125Cu;
    SET_GPR_U32(ctx, 31, 0x181264u);
    ctx->pc = 0x181260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18125Cu;
            // 0x181260: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181264u; }
        if (ctx->pc != 0x181264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181264u; }
        if (ctx->pc != 0x181264u) { return; }
    }
    ctx->pc = 0x181264u;
label_181264:
    // 0x181264: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x181264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x181268: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181268u;
    SET_GPR_U32(ctx, 31, 0x181270u);
    ctx->pc = 0x18126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181268u;
            // 0x18126c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181270u; }
        if (ctx->pc != 0x181270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181270u; }
        if (ctx->pc != 0x181270u) { return; }
    }
    ctx->pc = 0x181270u;
label_181270:
    // 0x181270: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x181274: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181274u;
    SET_GPR_U32(ctx, 31, 0x18127Cu);
    ctx->pc = 0x181278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181274u;
            // 0x181278: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18127Cu; }
        if (ctx->pc != 0x18127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18127Cu; }
        if (ctx->pc != 0x18127Cu) { return; }
    }
    ctx->pc = 0x18127Cu;
label_18127c:
    // 0x18127c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x18127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x181280: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181280u;
    SET_GPR_U32(ctx, 31, 0x181288u);
    ctx->pc = 0x181284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181280u;
            // 0x181284: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181288u; }
        if (ctx->pc != 0x181288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181288u; }
        if (ctx->pc != 0x181288u) { return; }
    }
    ctx->pc = 0x181288u;
label_181288:
    // 0x181288: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x181288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x18128c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18128Cu;
    SET_GPR_U32(ctx, 31, 0x181294u);
    ctx->pc = 0x181290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18128Cu;
            // 0x181290: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181294u; }
        if (ctx->pc != 0x181294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181294u; }
        if (ctx->pc != 0x181294u) { return; }
    }
    ctx->pc = 0x181294u;
label_181294:
    // 0x181294: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x181294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x181298: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x181298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x18129c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x18129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1812a0: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x1812a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
    // 0x1812a4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1812a8: 0xae220114  sw          $v0, 0x114($s1)
    ctx->pc = 0x1812a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
    // 0x1812ac: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1812acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1812b0: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x1812b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x1812b4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1812b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1812B8u;
    SET_GPR_U32(ctx, 31, 0x1812C0u);
    ctx->pc = 0x1812BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1812B8u;
            // 0x1812bc: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812C0u; }
        if (ctx->pc != 0x1812C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812C0u; }
        if (ctx->pc != 0x1812C0u) { return; }
    }
    ctx->pc = 0x1812C0u;
label_1812c0:
    // 0x1812c0: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x1812c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1812c4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1812C4u;
    SET_GPR_U32(ctx, 31, 0x1812CCu);
    ctx->pc = 0x1812C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1812C4u;
            // 0x1812c8: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812CCu; }
        if (ctx->pc != 0x1812CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812CCu; }
        if (ctx->pc != 0x1812CCu) { return; }
    }
    ctx->pc = 0x1812CCu;
label_1812cc:
    // 0x1812cc: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1812d0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1812D0u;
    SET_GPR_U32(ctx, 31, 0x1812D8u);
    ctx->pc = 0x1812D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1812D0u;
            // 0x1812d4: 0x26050140  addiu       $a1, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812D8u; }
        if (ctx->pc != 0x1812D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812D8u; }
        if (ctx->pc != 0x1812D8u) { return; }
    }
    ctx->pc = 0x1812D8u;
label_1812d8:
    // 0x1812d8: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1812dc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1812DCu;
    SET_GPR_U32(ctx, 31, 0x1812E4u);
    ctx->pc = 0x1812E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1812DCu;
            // 0x1812e0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812E4u; }
        if (ctx->pc != 0x1812E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812E4u; }
        if (ctx->pc != 0x1812E4u) { return; }
    }
    ctx->pc = 0x1812E4u;
label_1812e4:
    // 0x1812e4: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1812e8: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x1812e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x1812ec: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x1812ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1812f0: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1812f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x1812f4: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1812f8: 0xae220164  sw          $v0, 0x164($s1)
    ctx->pc = 0x1812f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
    // 0x1812fc: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x181300: 0xae220168  sw          $v0, 0x168($s1)
    ctx->pc = 0x181300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 2));
    // 0x181304: 0x8e02016c  lw          $v0, 0x16C($s0)
    ctx->pc = 0x181304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x181308: 0xae22016c  sw          $v0, 0x16C($s1)
    ctx->pc = 0x181308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
    // 0x18130c: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x18130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x181310: 0xae220170  sw          $v0, 0x170($s1)
    ctx->pc = 0x181310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
    // 0x181314: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x181318: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x181318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
    // 0x18131c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x18131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x181320: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181320u;
    SET_GPR_U32(ctx, 31, 0x181328u);
    ctx->pc = 0x181324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181320u;
            // 0x181324: 0xae220178  sw          $v0, 0x178($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181328u; }
        if (ctx->pc != 0x181328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181328u; }
        if (ctx->pc != 0x181328u) { return; }
    }
    ctx->pc = 0x181328u;
label_181328:
    // 0x181328: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x181328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x18132c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18132Cu;
    SET_GPR_U32(ctx, 31, 0x181334u);
    ctx->pc = 0x181330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18132Cu;
            // 0x181330: 0x26050190  addiu       $a1, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181334u; }
        if (ctx->pc != 0x181334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181334u; }
        if (ctx->pc != 0x181334u) { return; }
    }
    ctx->pc = 0x181334u;
label_181334:
    // 0x181334: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x181338: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181338u;
    SET_GPR_U32(ctx, 31, 0x181340u);
    ctx->pc = 0x18133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181338u;
            // 0x18133c: 0x260501a0  addiu       $a1, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181340u; }
        if (ctx->pc != 0x181340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181340u; }
        if (ctx->pc != 0x181340u) { return; }
    }
    ctx->pc = 0x181340u;
label_181340:
    // 0x181340: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x181340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x181344: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181344u;
    SET_GPR_U32(ctx, 31, 0x18134Cu);
    ctx->pc = 0x181348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181344u;
            // 0x181348: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18134Cu; }
        if (ctx->pc != 0x18134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18134Cu; }
        if (ctx->pc != 0x18134Cu) { return; }
    }
    ctx->pc = 0x18134Cu;
label_18134c:
    // 0x18134c: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x18134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x181350: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x181354: 0x260501d0  addiu       $a1, $s0, 0x1D0
    ctx->pc = 0x181354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x181358: 0xae2201c0  sw          $v0, 0x1C0($s1)
    ctx->pc = 0x181358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
    // 0x18135c: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x18135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x181360: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x181360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
    // 0x181364: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x181368: 0xae2201c8  sw          $v0, 0x1C8($s1)
    ctx->pc = 0x181368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 2));
    // 0x18136c: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x18136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x181370: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181370u;
    SET_GPR_U32(ctx, 31, 0x181378u);
    ctx->pc = 0x181374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181370u;
            // 0x181374: 0xae2201cc  sw          $v0, 0x1CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181378u; }
        if (ctx->pc != 0x181378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181378u; }
        if (ctx->pc != 0x181378u) { return; }
    }
    ctx->pc = 0x181378u;
label_181378:
    // 0x181378: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x18137c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x18137Cu;
    SET_GPR_U32(ctx, 31, 0x181384u);
    ctx->pc = 0x181380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18137Cu;
            // 0x181380: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181384u; }
        if (ctx->pc != 0x181384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181384u; }
        if (ctx->pc != 0x181384u) { return; }
    }
    ctx->pc = 0x181384u;
label_181384:
    // 0x181384: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x181384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x181388: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181388u;
    SET_GPR_U32(ctx, 31, 0x181390u);
    ctx->pc = 0x18138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181388u;
            // 0x18138c: 0x260501f0  addiu       $a1, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181390u; }
        if (ctx->pc != 0x181390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181390u; }
        if (ctx->pc != 0x181390u) { return; }
    }
    ctx->pc = 0x181390u;
label_181390:
    // 0x181390: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x181394: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181394u;
    SET_GPR_U32(ctx, 31, 0x18139Cu);
    ctx->pc = 0x181398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181394u;
            // 0x181398: 0x26050200  addiu       $a1, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18139Cu; }
        if (ctx->pc != 0x18139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18139Cu; }
        if (ctx->pc != 0x18139Cu) { return; }
    }
    ctx->pc = 0x18139Cu;
label_18139c:
    // 0x18139c: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1813a0: 0x2624025c  addiu       $a0, $s1, 0x25C
    ctx->pc = 0x1813a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 604));
    // 0x1813a4: 0x2605025c  addiu       $a1, $s0, 0x25C
    ctx->pc = 0x1813a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
    // 0x1813a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1813a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1813ac: 0xae220210  sw          $v0, 0x210($s1)
    ctx->pc = 0x1813acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
    // 0x1813b0: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1813b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1813b4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1813b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x1813b8: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1813b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1813bc: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x1813bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
    // 0x1813c0: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x1813c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x1813c4: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x1813c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x1813c8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x1813c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1813cc: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x1813ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
    // 0x1813d0: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x1813d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x1813d4: 0xae220224  sw          $v0, 0x224($s1)
    ctx->pc = 0x1813d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
    // 0x1813d8: 0xc6000228  lwc1        $f0, 0x228($s0)
    ctx->pc = 0x1813d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813dc: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x1813dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x1813e0: 0xc600022c  lwc1        $f0, 0x22C($s0)
    ctx->pc = 0x1813e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813e4: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x1813e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    // 0x1813e8: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1813e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813ec: 0xe6200230  swc1        $f0, 0x230($s1)
    ctx->pc = 0x1813ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
    // 0x1813f0: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1813f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1813f4: 0xae220234  sw          $v0, 0x234($s1)
    ctx->pc = 0x1813f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x1813f8: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x1813f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1813fc: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x1813fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x181400: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x181400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x181404: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x181404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x181408: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x181408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18140c: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x18140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    // 0x181410: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x181410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181414: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x181414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x181418: 0xc6000248  lwc1        $f0, 0x248($s0)
    ctx->pc = 0x181418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18141c: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x18141cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    // 0x181420: 0x8e02024c  lw          $v0, 0x24C($s0)
    ctx->pc = 0x181420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x181424: 0xae22024c  sw          $v0, 0x24C($s1)
    ctx->pc = 0x181424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
    // 0x181428: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x181428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x18142c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x18142cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x181430: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x181434: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x181434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x181438: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x18143c: 0xc049c18  jal         func_127060
    ctx->pc = 0x18143Cu;
    SET_GPR_U32(ctx, 31, 0x181444u);
    ctx->pc = 0x181440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18143Cu;
            // 0x181440: 0xae220258  sw          $v0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181444u; }
        if (ctx->pc != 0x181444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181444u; }
        if (ctx->pc != 0x181444u) { return; }
    }
    ctx->pc = 0x181444u;
label_181444:
    // 0x181444: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x181444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x181448: 0x262402f0  addiu       $a0, $s1, 0x2F0
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    // 0x18144c: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x181450: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x181450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
    // 0x181454: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x181458: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x181458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    // 0x18145c: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x181460: 0xc041c5c  jal         func_107170
    ctx->pc = 0x181460u;
    SET_GPR_U32(ctx, 31, 0x181468u);
    ctx->pc = 0x181464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181460u;
            // 0x181464: 0xae2202e4  sw          $v0, 0x2E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181468u; }
        if (ctx->pc != 0x181468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181468u; }
        if (ctx->pc != 0x181468u) { return; }
    }
    ctx->pc = 0x181468u;
label_181468:
    // 0x181468: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x181468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18146c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18146cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181470: 0xe6200300  swc1        $f0, 0x300($s1)
    ctx->pc = 0x181470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 768), bits); }
    // 0x181474: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x181474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181478: 0xe6200304  swc1        $f0, 0x304($s1)
    ctx->pc = 0x181478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 772), bits); }
    // 0x18147c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18147cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181488: 0x3e00008  jr          $ra
    ctx->pc = 0x181488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181488u;
            // 0x18148c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181490u;
}
