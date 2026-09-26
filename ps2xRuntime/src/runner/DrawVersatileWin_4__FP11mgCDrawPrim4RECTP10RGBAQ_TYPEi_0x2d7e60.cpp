#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawVersatileWin_4__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi
// Address: 0x2d7e60 - 0x2d8250
void DrawVersatileWin_4__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawVersatileWin_4__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7e60");
#endif

    switch (ctx->pc) {
        case 0x2d7ec8u: goto label_2d7ec8;
        case 0x2d7f20u: goto label_2d7f20;
        case 0x2d7f38u: goto label_2d7f38;
        case 0x2d7f54u: goto label_2d7f54;
        case 0x2d7f7cu: goto label_2d7f7c;
        case 0x2d7f94u: goto label_2d7f94;
        case 0x2d7fb0u: goto label_2d7fb0;
        case 0x2d7fd8u: goto label_2d7fd8;
        case 0x2d7ff0u: goto label_2d7ff0;
        case 0x2d800cu: goto label_2d800c;
        case 0x2d8034u: goto label_2d8034;
        case 0x2d804cu: goto label_2d804c;
        case 0x2d8068u: goto label_2d8068;
        case 0x2d80b0u: goto label_2d80b0;
        case 0x2d80d8u: goto label_2d80d8;
        case 0x2d80f0u: goto label_2d80f0;
        case 0x2d810cu: goto label_2d810c;
        case 0x2d8134u: goto label_2d8134;
        case 0x2d814cu: goto label_2d814c;
        case 0x2d8168u: goto label_2d8168;
        case 0x2d8190u: goto label_2d8190;
        case 0x2d81a8u: goto label_2d81a8;
        case 0x2d81c4u: goto label_2d81c4;
        case 0x2d81ecu: goto label_2d81ec;
        case 0x2d8204u: goto label_2d8204;
        case 0x2d8220u: goto label_2d8220;
        default: break;
    }

    ctx->pc = 0x2d7e60u;

    // 0x2d7e60: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2d7e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2d7e64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d7e68: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2d7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d7e6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d7e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d7e70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d7e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d7e74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d7e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d7e78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d7e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d7e7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d7e80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d7e80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d7e88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d7e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d7e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d7e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7e9c: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x2d7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
    // 0x2d7ea0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7ea4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d7ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7ea8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7eac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7eb0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d7eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d7eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7eb8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d7eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7ebc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7ec0: 0xc054514  jal         func_151450
    ctx->pc = 0x2D7EC0u;
    SET_GPR_U32(ctx, 31, 0x2D7EC8u);
    ctx->pc = 0x2D7EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7EC0u;
            // 0x2d7ec4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7EC8u; }
        if (ctx->pc != 0x2D7EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7EC8u; }
        if (ctx->pc != 0x2D7EC8u) { return; }
    }
    ctx->pc = 0x2D7EC8u;
label_2d7ec8:
    // 0x2d7ec8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7ecc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7ed0: 0x8c2570f0  lw          $a1, 0x70F0($at)
    ctx->pc = 0x2d7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28912)));
    // 0x2d7ed4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d7ed8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d7edc: 0x8fb300b4  lw          $s3, 0xB4($sp)
    ctx->pc = 0x2d7edcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2d7ee0: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d7ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2d7ee4: 0x245e0017  addiu       $fp, $v0, 0x17
    ctx->pc = 0x2d7ee4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    // 0x2d7ee8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7eec: 0x8c2670f4  lw          $a2, 0x70F4($at)
    ctx->pc = 0x2d7eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28916)));
    // 0x2d7ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7ef4: 0x2457ffe9  addiu       $s7, $v0, -0x17
    ctx->pc = 0x2d7ef4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x2d7ef8: 0x2476ffd2  addiu       $s6, $v1, -0x2E
    ctx->pc = 0x2d7ef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967250));
    // 0x2d7efc: 0x2681021  addu        $v0, $s3, $t0
    ctx->pc = 0x2d7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2d7f00: 0x2511ffce  addiu       $s1, $t0, -0x32
    ctx->pc = 0x2d7f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967246));
    // 0x2d7f04: 0x2452ffe7  addiu       $s2, $v0, -0x19
    ctx->pc = 0x2d7f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x2d7f08: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7f0c: 0x8c2770f8  lw          $a3, 0x70F8($at)
    ctx->pc = 0x2d7f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28920)));
    // 0x2d7f10: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7f14: 0x8c2870fc  lw          $t0, 0x70FC($at)
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28924)));
    // 0x2d7f18: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7F18u;
    SET_GPR_U32(ctx, 31, 0x2D7F20u);
    ctx->pc = 0x2D7F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F18u;
            // 0x2d7f1c: 0x26700019  addiu       $s0, $s3, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F20u; }
        if (ctx->pc != 0x2D7F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F20u; }
        if (ctx->pc != 0x2D7F20u) { return; }
    }
    ctx->pc = 0x2D7F20u;
label_2d7f20:
    // 0x2d7f20: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7f24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d7f28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d7f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f2c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7f30: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7F30u;
    SET_GPR_U32(ctx, 31, 0x2D7F38u);
    ctx->pc = 0x2D7F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F30u;
            // 0x2d7f34: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F38u; }
        if (ctx->pc != 0x2D7F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F38u; }
        if (ctx->pc != 0x2D7F38u) { return; }
    }
    ctx->pc = 0x2D7F38u;
label_2d7f38:
    // 0x2d7f38: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7f3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f40: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7f44: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2d7f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d7f48: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2d7f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d7f4c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F54u);
    ctx->pc = 0x2D7F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F4Cu;
            // 0x2d7f50: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F54u; }
        if (ctx->pc != 0x2D7F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F54u; }
        if (ctx->pc != 0x2D7F54u) { return; }
    }
    ctx->pc = 0x2D7F54u;
label_2d7f54:
    // 0x2d7f54: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7f58: 0x8c257100  lw          $a1, 0x7100($at)
    ctx->pc = 0x2d7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28928)));
    // 0x2d7f5c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7f60: 0x8c267104  lw          $a2, 0x7104($at)
    ctx->pc = 0x2d7f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28932)));
    // 0x2d7f64: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7f68: 0x8c277108  lw          $a3, 0x7108($at)
    ctx->pc = 0x2d7f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28936)));
    // 0x2d7f6c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7f70: 0x8c28710c  lw          $t0, 0x710C($at)
    ctx->pc = 0x2d7f70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28940)));
    // 0x2d7f74: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7F74u;
    SET_GPR_U32(ctx, 31, 0x2D7F7Cu);
    ctx->pc = 0x2D7F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F74u;
            // 0x2d7f78: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F7Cu; }
        if (ctx->pc != 0x2D7F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F7Cu; }
        if (ctx->pc != 0x2D7F7Cu) { return; }
    }
    ctx->pc = 0x2D7F7Cu;
label_2d7f7c:
    // 0x2d7f7c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d7f80: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d7f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d7f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f88: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2d7f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f8c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7F8Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F94u);
    ctx->pc = 0x2D7F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F8Cu;
            // 0x2d7f90: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F94u; }
        if (ctx->pc != 0x2D7F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F94u; }
        if (ctx->pc != 0x2D7F94u) { return; }
    }
    ctx->pc = 0x2D7F94u;
label_2d7f94:
    // 0x2d7f94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7f98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f9c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7fa0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2d7fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d7fa4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2d7fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d7fa8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7FA8u;
    SET_GPR_U32(ctx, 31, 0x2D7FB0u);
    ctx->pc = 0x2D7FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7FA8u;
            // 0x2d7fac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FB0u; }
        if (ctx->pc != 0x2D7FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FB0u; }
        if (ctx->pc != 0x2D7FB0u) { return; }
    }
    ctx->pc = 0x2D7FB0u;
label_2d7fb0:
    // 0x2d7fb0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7fb4: 0x8c257110  lw          $a1, 0x7110($at)
    ctx->pc = 0x2d7fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28944)));
    // 0x2d7fb8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7fbc: 0x8c267114  lw          $a2, 0x7114($at)
    ctx->pc = 0x2d7fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28948)));
    // 0x2d7fc0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7fc4: 0x8c277118  lw          $a3, 0x7118($at)
    ctx->pc = 0x2d7fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28952)));
    // 0x2d7fc8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7fcc: 0x8c28711c  lw          $t0, 0x711C($at)
    ctx->pc = 0x2d7fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28956)));
    // 0x2d7fd0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7FD0u;
    SET_GPR_U32(ctx, 31, 0x2D7FD8u);
    ctx->pc = 0x2D7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7FD0u;
            // 0x2d7fd4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FD8u; }
        if (ctx->pc != 0x2D7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FD8u; }
        if (ctx->pc != 0x2D7FD8u) { return; }
    }
    ctx->pc = 0x2D7FD8u;
label_2d7fd8:
    // 0x2d7fd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d7fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7fdc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d7fe0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d7fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7fe4: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7fe8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7FE8u;
    SET_GPR_U32(ctx, 31, 0x2D7FF0u);
    ctx->pc = 0x2D7FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7FE8u;
            // 0x2d7fec: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FF0u; }
        if (ctx->pc != 0x2D7FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FF0u; }
        if (ctx->pc != 0x2D7FF0u) { return; }
    }
    ctx->pc = 0x2D7FF0u;
label_2d7ff0:
    // 0x2d7ff0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7ff4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ff8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7ffc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2d7ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d8000: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2d8000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d8004: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8004u;
    SET_GPR_U32(ctx, 31, 0x2D800Cu);
    ctx->pc = 0x2D8008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8004u;
            // 0x2d8008: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D800Cu; }
        if (ctx->pc != 0x2D800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D800Cu; }
        if (ctx->pc != 0x2D800Cu) { return; }
    }
    ctx->pc = 0x2D800Cu;
label_2d800c:
    // 0x2d800c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d800cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8010: 0x8c257000  lw          $a1, 0x7000($at)
    ctx->pc = 0x2d8010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28672)));
    // 0x2d8014: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8018: 0x8c267004  lw          $a2, 0x7004($at)
    ctx->pc = 0x2d8018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28676)));
    // 0x2d801c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d801cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8020: 0x8c277008  lw          $a3, 0x7008($at)
    ctx->pc = 0x2d8020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28680)));
    // 0x2d8024: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8028: 0x8c28700c  lw          $t0, 0x700C($at)
    ctx->pc = 0x2d8028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28684)));
    // 0x2d802c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D802Cu;
    SET_GPR_U32(ctx, 31, 0x2D8034u);
    ctx->pc = 0x2D8030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D802Cu;
            // 0x2d8030: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8034u; }
        if (ctx->pc != 0x2D8034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8034u; }
        if (ctx->pc != 0x2D8034u) { return; }
    }
    ctx->pc = 0x2D8034u;
label_2d8034:
    // 0x2d8034: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d8034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8038: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d8038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d803c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d803cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8040: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d8040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d8044: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8044u;
    SET_GPR_U32(ctx, 31, 0x2D804Cu);
    ctx->pc = 0x2D8048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8044u;
            // 0x2d8048: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D804Cu; }
        if (ctx->pc != 0x2D804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D804Cu; }
        if (ctx->pc != 0x2D804Cu) { return; }
    }
    ctx->pc = 0x2D804Cu;
label_2d804c:
    // 0x2d804c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d804cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8050: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8054: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8058: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2d8058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d805c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x2d805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d8060: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8060u;
    SET_GPR_U32(ctx, 31, 0x2D8068u);
    ctx->pc = 0x2D8064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8060u;
            // 0x2d8064: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8068u; }
        if (ctx->pc != 0x2D8068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8068u; }
        if (ctx->pc != 0x2D8068u) { return; }
    }
    ctx->pc = 0x2D8068u;
label_2d8068:
    // 0x2d8068: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2d806c: 0x27c4fff6  addiu       $a0, $fp, -0xA
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967286));
    // 0x2d8070: 0x2605fff3  addiu       $a1, $s0, -0xD
    ctx->pc = 0x2d8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967283));
    // 0x2d8074: 0x26c60016  addiu       $a2, $s6, 0x16
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 22));
    // 0x2d8078: 0x2627001c  addiu       $a3, $s1, 0x1C
    ctx->pc = 0x2d8078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2d807c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d807cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d8080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d8080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d8084: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d8084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d8088: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d8088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d808c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d8090: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8090u;
    {
        const bool branch_taken_0x2d8090 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D8094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8090u;
            // 0x2d8094: 0x259c3  sra         $t3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8090) {
            ctx->pc = 0x2D80A0u;
            goto label_2d80a0;
        }
    }
    ctx->pc = 0x2D8098u;
    // 0x2d8098: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x2d8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x2d809c: 0x259c3  sra         $t3, $v0, 7
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
label_2d80a0:
    // 0x2d80a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d80a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d80a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80a8: 0xc0545fc  jal         func_1517F0
    ctx->pc = 0x2D80A8u;
    SET_GPR_U32(ctx, 31, 0x2D80B0u);
    ctx->pc = 0x2D80ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D80A8u;
            // 0x2d80ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1517F0u;
    if (runtime->hasFunction(0x1517F0u)) {
        auto targetFn = runtime->lookupFunction(0x1517F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80B0u; }
        if (ctx->pc != 0x2D80B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FillRect__Fiiiiiiii_0x1517f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80B0u; }
        if (ctx->pc != 0x2D80B0u) { return; }
    }
    ctx->pc = 0x2D80B0u;
label_2d80b0:
    // 0x2d80b0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d80b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d80b4: 0x8c257020  lw          $a1, 0x7020($at)
    ctx->pc = 0x2d80b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28704)));
    // 0x2d80b8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d80b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d80bc: 0x8c267024  lw          $a2, 0x7024($at)
    ctx->pc = 0x2d80bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28708)));
    // 0x2d80c0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d80c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d80c4: 0x8c277028  lw          $a3, 0x7028($at)
    ctx->pc = 0x2d80c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28712)));
    // 0x2d80c8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d80c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d80cc: 0x8c28702c  lw          $t0, 0x702C($at)
    ctx->pc = 0x2d80ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28716)));
    // 0x2d80d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D80D0u;
    SET_GPR_U32(ctx, 31, 0x2D80D8u);
    ctx->pc = 0x2D80D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D80D0u;
            // 0x2d80d4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80D8u; }
        if (ctx->pc != 0x2D80D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80D8u; }
        if (ctx->pc != 0x2D80D8u) { return; }
    }
    ctx->pc = 0x2D80D8u;
label_2d80d8:
    // 0x2d80d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d80d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80dc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d80dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80e0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d80e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d80e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d80e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D80E8u;
    SET_GPR_U32(ctx, 31, 0x2D80F0u);
    ctx->pc = 0x2D80ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D80E8u;
            // 0x2d80ec: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80F0u; }
        if (ctx->pc != 0x2D80F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80F0u; }
        if (ctx->pc != 0x2D80F0u) { return; }
    }
    ctx->pc = 0x2D80F0u;
label_2d80f0:
    // 0x2d80f0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d80f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d80f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d80f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80f8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d80fc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2d80fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d8100: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2d8100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d8104: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8104u;
    SET_GPR_U32(ctx, 31, 0x2D810Cu);
    ctx->pc = 0x2D8108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8104u;
            // 0x2d8108: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D810Cu; }
        if (ctx->pc != 0x2D810Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D810Cu; }
        if (ctx->pc != 0x2D810Cu) { return; }
    }
    ctx->pc = 0x2D810Cu;
label_2d810c:
    // 0x2d810c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d810cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8110: 0x8c2570c0  lw          $a1, 0x70C0($at)
    ctx->pc = 0x2d8110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28864)));
    // 0x2d8114: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8118: 0x8c2670c4  lw          $a2, 0x70C4($at)
    ctx->pc = 0x2d8118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28868)));
    // 0x2d811c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8120: 0x8c2770c8  lw          $a3, 0x70C8($at)
    ctx->pc = 0x2d8120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28872)));
    // 0x2d8124: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8128: 0x8c2870cc  lw          $t0, 0x70CC($at)
    ctx->pc = 0x2d8128u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28876)));
    // 0x2d812c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D812Cu;
    SET_GPR_U32(ctx, 31, 0x2D8134u);
    ctx->pc = 0x2D8130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D812Cu;
            // 0x2d8130: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8134u; }
        if (ctx->pc != 0x2D8134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8134u; }
        if (ctx->pc != 0x2D8134u) { return; }
    }
    ctx->pc = 0x2D8134u;
label_2d8134:
    // 0x2d8134: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d8134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d8138: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d8138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d813c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d813cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8140: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d8140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d8144: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8144u;
    SET_GPR_U32(ctx, 31, 0x2D814Cu);
    ctx->pc = 0x2D8148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8144u;
            // 0x2d8148: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D814Cu; }
        if (ctx->pc != 0x2D814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D814Cu; }
        if (ctx->pc != 0x2D814Cu) { return; }
    }
    ctx->pc = 0x2D814Cu;
label_2d814c:
    // 0x2d814c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d814cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8150: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8154: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8158: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2d8158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d815c: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2d815cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d8160: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8160u;
    SET_GPR_U32(ctx, 31, 0x2D8168u);
    ctx->pc = 0x2D8164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8160u;
            // 0x2d8164: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8168u; }
        if (ctx->pc != 0x2D8168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8168u; }
        if (ctx->pc != 0x2D8168u) { return; }
    }
    ctx->pc = 0x2D8168u;
label_2d8168:
    // 0x2d8168: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d816c: 0x8c2570d0  lw          $a1, 0x70D0($at)
    ctx->pc = 0x2d816cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28880)));
    // 0x2d8170: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8174: 0x8c2670d4  lw          $a2, 0x70D4($at)
    ctx->pc = 0x2d8174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28884)));
    // 0x2d8178: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d817c: 0x8c2770d8  lw          $a3, 0x70D8($at)
    ctx->pc = 0x2d817cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28888)));
    // 0x2d8180: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d8180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d8184: 0x8c2870dc  lw          $t0, 0x70DC($at)
    ctx->pc = 0x2d8184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28892)));
    // 0x2d8188: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D8188u;
    SET_GPR_U32(ctx, 31, 0x2D8190u);
    ctx->pc = 0x2D818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8188u;
            // 0x2d818c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8190u; }
        if (ctx->pc != 0x2D8190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8190u; }
        if (ctx->pc != 0x2D8190u) { return; }
    }
    ctx->pc = 0x2D8190u;
label_2d8190:
    // 0x2d8190: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d8190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8194: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2d8194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8198: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d8198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d819c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81a0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D81A0u;
    SET_GPR_U32(ctx, 31, 0x2D81A8u);
    ctx->pc = 0x2D81A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81A0u;
            // 0x2d81a4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81A8u; }
        if (ctx->pc != 0x2D81A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81A8u; }
        if (ctx->pc != 0x2D81A8u) { return; }
    }
    ctx->pc = 0x2D81A8u;
label_2d81a8:
    // 0x2d81a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d81ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d81acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81b0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d81b4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2d81b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d81b8: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2d81b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d81bc: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D81BCu;
    SET_GPR_U32(ctx, 31, 0x2D81C4u);
    ctx->pc = 0x2D81C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81BCu;
            // 0x2d81c0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81C4u; }
        if (ctx->pc != 0x2D81C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81C4u; }
        if (ctx->pc != 0x2D81C4u) { return; }
    }
    ctx->pc = 0x2D81C4u;
label_2d81c4:
    // 0x2d81c4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d81c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d81c8: 0x8c2570e0  lw          $a1, 0x70E0($at)
    ctx->pc = 0x2d81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28896)));
    // 0x2d81cc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d81ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d81d0: 0x8c2670e4  lw          $a2, 0x70E4($at)
    ctx->pc = 0x2d81d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28900)));
    // 0x2d81d4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d81d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d81d8: 0x8c2770e8  lw          $a3, 0x70E8($at)
    ctx->pc = 0x2d81d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28904)));
    // 0x2d81dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d81dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d81e0: 0x8c2870ec  lw          $t0, 0x70EC($at)
    ctx->pc = 0x2d81e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28908)));
    // 0x2d81e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D81E4u;
    SET_GPR_U32(ctx, 31, 0x2D81ECu);
    ctx->pc = 0x2D81E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81E4u;
            // 0x2d81e8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81ECu; }
        if (ctx->pc != 0x2D81ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81ECu; }
        if (ctx->pc != 0x2D81ECu) { return; }
    }
    ctx->pc = 0x2D81ECu;
label_2d81ec:
    // 0x2d81ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d81ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d81f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81f4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d81f8: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d81f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d81fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D81FCu;
    SET_GPR_U32(ctx, 31, 0x2D8204u);
    ctx->pc = 0x2D8200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D81FCu;
            // 0x2d8200: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8204u; }
        if (ctx->pc != 0x2D8204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8204u; }
        if (ctx->pc != 0x2D8204u) { return; }
    }
    ctx->pc = 0x2D8204u;
label_2d8204:
    // 0x2d8204: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d8204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d8208: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d8208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d820c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d820cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8210: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d8210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d8214: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2d8214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d8218: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D8218u;
    SET_GPR_U32(ctx, 31, 0x2D8220u);
    ctx->pc = 0x2D821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8218u;
            // 0x2d821c: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8220u; }
        if (ctx->pc != 0x2D8220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8220u; }
        if (ctx->pc != 0x2D8220u) { return; }
    }
    ctx->pc = 0x2D8220u;
label_2d8220:
    // 0x2d8220: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d8220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8224: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d8224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8228: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d8228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d822c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d822cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8230: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d8230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8234: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d8234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8238: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d8238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d823c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d823cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8248: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8248u;
            // 0x2d824c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8250u;
}
