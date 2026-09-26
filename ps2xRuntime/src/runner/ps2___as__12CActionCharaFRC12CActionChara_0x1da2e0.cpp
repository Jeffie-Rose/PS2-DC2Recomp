#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__12CActionCharaFRC12CActionChara
// Address: 0x1da2e0 - 0x1dac5c
void ps2___as__12CActionCharaFRC12CActionChara_0x1da2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__12CActionCharaFRC12CActionChara_0x1da2e0");
#endif

    switch (ctx->pc) {
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da358u: goto label_1da358;
        case 0x1da384u: goto label_1da384;
        case 0x1da430u: goto label_1da430;
        case 0x1da4acu: goto label_1da4ac;
        case 0x1da5c8u: goto label_1da5c8;
        case 0x1da5f4u: goto label_1da5f4;
        case 0x1da7f8u: goto label_1da7f8;
        case 0x1da86cu: goto label_1da86c;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da984u: goto label_1da984;
        case 0x1daaa8u: goto label_1daaa8;
        case 0x1daadcu: goto label_1daadc;
        case 0x1dab08u: goto label_1dab08;
        case 0x1dab8cu: goto label_1dab8c;
        case 0x1dabb8u: goto label_1dabb8;
        case 0x1dac24u: goto label_1dac24;
        default: break;
    }

    ctx->pc = 0x1da2e0u;

    // 0x1da2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1da2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1da2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2f4: 0xc05e5b8  jal         func_1796E0
    ctx->pc = 0x1DA2F4u;
    SET_GPR_U32(ctx, 31, 0x1DA2FCu);
    ctx->pc = 0x1DA2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2F4u;
            // 0x1da2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1796E0u;
    if (runtime->hasFunction(0x1796E0u)) {
        auto targetFn = runtime->lookupFunction(0x1796E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2FCu; }
        if (ctx->pc != 0x1DA2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__7CObjectFRC7CObject_0x1796e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2FCu; }
        if (ctx->pc != 0x1DA2FCu) { return; }
    }
    ctx->pc = 0x1DA2FCu;
label_1da2fc:
    // 0x1da2fc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1da2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1da300: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1da304: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x1da304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1da308: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1da30c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1da30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x1da310: 0xc6030080  lwc1        $f3, 0x80($s0)
    ctx->pc = 0x1da310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da314: 0xc6020084  lwc1        $f2, 0x84($s0)
    ctx->pc = 0x1da314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da318: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x1da318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da31c: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x1da31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da320: 0xe6230080  swc1        $f3, 0x80($s1)
    ctx->pc = 0x1da320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x1da324: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x1da324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x1da328: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x1da328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x1da32c: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x1da32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x1da330: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x1da330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da334: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x1da334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da338: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x1da338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da33c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x1da33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da340: 0xe6230090  swc1        $f3, 0x90($s1)
    ctx->pc = 0x1da340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x1da344: 0xe6220094  swc1        $f2, 0x94($s1)
    ctx->pc = 0x1da344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x1da348: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x1da348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1da34c: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x1da34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x1da350: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x1da350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da354: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x1da354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_1da358:
    // 0x1da358: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da35c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da360: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1da364: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da368: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1da36c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1da36cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1da370: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA370u;
    {
        const bool branch_taken_0x1da370 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA370u;
            // 0x1da374: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da370) {
            ctx->pc = 0x1DA358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da358;
        }
    }
    ctx->pc = 0x1DA378u;
    // 0x1da378: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x1da378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1da37c: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x1da37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1da380: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1da384:
    // 0x1da384: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1da384u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da388: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da38c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1da390: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1da390u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da394: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1da394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1da398: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1da398u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da39c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA39Cu;
    {
        const bool branch_taken_0x1da39c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA39Cu;
            // 0x1da3a0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da39c) {
            ctx->pc = 0x1DA384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da384;
        }
    }
    ctx->pc = 0x1DA3A4u;
    // 0x1da3a4: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1da3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da3a8: 0x26060140  addiu       $a2, $s0, 0x140
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1da3ac: 0x26250140  addiu       $a1, $s1, 0x140
    ctx->pc = 0x1da3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1da3b0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1da3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1da3b4: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1da3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1da3b8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1da3bc: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x1da3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x1da3c0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1da3c4: 0xae220108  sw          $v0, 0x108($s1)
    ctx->pc = 0x1da3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
    // 0x1da3c8: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x1da3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da3cc: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x1da3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x1da3d0: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x1da3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da3d4: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x1da3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x1da3d8: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x1da3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da3dc: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x1da3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x1da3e0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1da3e4: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x1da3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
    // 0x1da3e8: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1da3ec: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x1da3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x1da3f0: 0x86020120  lh          $v0, 0x120($s0)
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1da3f4: 0xa6220120  sh          $v0, 0x120($s1)
    ctx->pc = 0x1da3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da3f8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1da3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1da3fc: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x1da3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x1da400: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1da404: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x1da404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x1da408: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1da408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1da40c: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x1da40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x1da410: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1da414: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x1da414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
    // 0x1da418: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x1da418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1da41c: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x1da41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x1da420: 0xc6010138  lwc1        $f1, 0x138($s0)
    ctx->pc = 0x1da420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da424: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x1da424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da428: 0xe6210138  swc1        $f1, 0x138($s1)
    ctx->pc = 0x1da428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x1da42c: 0xe620013c  swc1        $f0, 0x13C($s1)
    ctx->pc = 0x1da42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
label_1da430:
    // 0x1da430: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da434: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da438: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1da438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1da43c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da43cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da440: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1da440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1da444: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1da444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1da448: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA448u;
    {
        const bool branch_taken_0x1da448 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA448u;
            // 0x1da44c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da448) {
            ctx->pc = 0x1DA430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da430;
        }
    }
    ctx->pc = 0x1DA450u;
    // 0x1da450: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x1da454: 0x260602e8  addiu       $a2, $s0, 0x2E8
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
    // 0x1da458: 0x262502e8  addiu       $a1, $s1, 0x2E8
    ctx->pc = 0x1da458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x1da45c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1da45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da460: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x1da460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    // 0x1da464: 0xc60302c4  lwc1        $f3, 0x2C4($s0)
    ctx->pc = 0x1da464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da468: 0xc60202c8  lwc1        $f2, 0x2C8($s0)
    ctx->pc = 0x1da468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da46c: 0xc60102cc  lwc1        $f1, 0x2CC($s0)
    ctx->pc = 0x1da46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da470: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1da470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da474: 0xe62302c4  swc1        $f3, 0x2C4($s1)
    ctx->pc = 0x1da474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
    // 0x1da478: 0xe62202c8  swc1        $f2, 0x2C8($s1)
    ctx->pc = 0x1da478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
    // 0x1da47c: 0xe62102cc  swc1        $f1, 0x2CC($s1)
    ctx->pc = 0x1da47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
    // 0x1da480: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x1da480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x1da484: 0xc60102d4  lwc1        $f1, 0x2D4($s0)
    ctx->pc = 0x1da484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da488: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1da488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da48c: 0xe62102d4  swc1        $f1, 0x2D4($s1)
    ctx->pc = 0x1da48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x1da490: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x1da490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x1da494: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1da494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1da498: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x1da498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
    // 0x1da49c: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x1da49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1da4a0: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x1da4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    // 0x1da4a4: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1da4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1da4a8: 0xae2202e4  sw          $v0, 0x2E4($s1)
    ctx->pc = 0x1da4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 2));
label_1da4ac:
    // 0x1da4ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da4b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da4b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1da4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1da4b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da4bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1da4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1da4c0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1da4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1da4c4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA4C4u;
    {
        const bool branch_taken_0x1da4c4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4C4u;
            // 0x1da4c8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4c4) {
            ctx->pc = 0x1DA4ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da4ac;
        }
    }
    ctx->pc = 0x1DA4CCu;
    // 0x1da4cc: 0x8e020348  lw          $v0, 0x348($s0)
    ctx->pc = 0x1da4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x1da4d0: 0x260603c0  addiu       $a2, $s0, 0x3C0
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x1da4d4: 0x262503c0  addiu       $a1, $s1, 0x3C0
    ctx->pc = 0x1da4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x1da4d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1da4dc: 0xae220348  sw          $v0, 0x348($s1)
    ctx->pc = 0x1da4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 2));
    // 0x1da4e0: 0x8e02034c  lw          $v0, 0x34C($s0)
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x1da4e4: 0xae22034c  sw          $v0, 0x34C($s1)
    ctx->pc = 0x1da4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 2));
    // 0x1da4e8: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x1da4ec: 0xae220350  sw          $v0, 0x350($s1)
    ctx->pc = 0x1da4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 2));
    // 0x1da4f0: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x1da4f4: 0xae220354  sw          $v0, 0x354($s1)
    ctx->pc = 0x1da4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 2));
    // 0x1da4f8: 0x8e020358  lw          $v0, 0x358($s0)
    ctx->pc = 0x1da4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 856)));
    // 0x1da4fc: 0xae220358  sw          $v0, 0x358($s1)
    ctx->pc = 0x1da4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 2));
    // 0x1da500: 0xc602035c  lwc1        $f2, 0x35C($s0)
    ctx->pc = 0x1da500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da504: 0xc6010360  lwc1        $f1, 0x360($s0)
    ctx->pc = 0x1da504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da508: 0xc6000364  lwc1        $f0, 0x364($s0)
    ctx->pc = 0x1da508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da50c: 0xe622035c  swc1        $f2, 0x35C($s1)
    ctx->pc = 0x1da50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 860), bits); }
    // 0x1da510: 0xe6210360  swc1        $f1, 0x360($s1)
    ctx->pc = 0x1da510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
    // 0x1da514: 0xe6200364  swc1        $f0, 0x364($s1)
    ctx->pc = 0x1da514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
    // 0x1da518: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x1da518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x1da51c: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x1da51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
    // 0x1da520: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x1da520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x1da524: 0xae22036c  sw          $v0, 0x36C($s1)
    ctx->pc = 0x1da524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 876), GPR_U32(ctx, 2));
    // 0x1da528: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x1da528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x1da52c: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x1da52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    // 0x1da530: 0x8e020374  lw          $v0, 0x374($s0)
    ctx->pc = 0x1da530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1da534: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x1da534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
    // 0x1da538: 0x8e020378  lw          $v0, 0x378($s0)
    ctx->pc = 0x1da538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1da53c: 0xae220378  sw          $v0, 0x378($s1)
    ctx->pc = 0x1da53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 2));
    // 0x1da540: 0x8e02037c  lw          $v0, 0x37C($s0)
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x1da544: 0xae22037c  sw          $v0, 0x37C($s1)
    ctx->pc = 0x1da544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 2));
    // 0x1da548: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x1da548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x1da54c: 0xae220380  sw          $v0, 0x380($s1)
    ctx->pc = 0x1da54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
    // 0x1da550: 0x8e020384  lw          $v0, 0x384($s0)
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x1da554: 0xae220384  sw          $v0, 0x384($s1)
    ctx->pc = 0x1da554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
    // 0x1da558: 0xc6000388  lwc1        $f0, 0x388($s0)
    ctx->pc = 0x1da558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da55c: 0xe6200388  swc1        $f0, 0x388($s1)
    ctx->pc = 0x1da55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 904), bits); }
    // 0x1da560: 0xc600038c  lwc1        $f0, 0x38C($s0)
    ctx->pc = 0x1da560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da564: 0xe620038c  swc1        $f0, 0x38C($s1)
    ctx->pc = 0x1da564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
    // 0x1da568: 0xc6000390  lwc1        $f0, 0x390($s0)
    ctx->pc = 0x1da568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da56c: 0xe6200390  swc1        $f0, 0x390($s1)
    ctx->pc = 0x1da56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
    // 0x1da570: 0x8e020394  lw          $v0, 0x394($s0)
    ctx->pc = 0x1da570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
    // 0x1da574: 0xae220394  sw          $v0, 0x394($s1)
    ctx->pc = 0x1da574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 2));
    // 0x1da578: 0x8e020398  lw          $v0, 0x398($s0)
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
    // 0x1da57c: 0xae220398  sw          $v0, 0x398($s1)
    ctx->pc = 0x1da57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 2));
    // 0x1da580: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x1da580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x1da584: 0xae22039c  sw          $v0, 0x39C($s1)
    ctx->pc = 0x1da584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 2));
    // 0x1da588: 0xc60003a0  lwc1        $f0, 0x3A0($s0)
    ctx->pc = 0x1da588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da58c: 0xe62003a0  swc1        $f0, 0x3A0($s1)
    ctx->pc = 0x1da58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
    // 0x1da590: 0x8e0203a4  lw          $v0, 0x3A4($s0)
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x1da594: 0xae2203a4  sw          $v0, 0x3A4($s1)
    ctx->pc = 0x1da594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 2));
    // 0x1da598: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x1da59c: 0xae2203a8  sw          $v0, 0x3A8($s1)
    ctx->pc = 0x1da59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 2));
    // 0x1da5a0: 0x8e0203ac  lw          $v0, 0x3AC($s0)
    ctx->pc = 0x1da5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x1da5a4: 0xae2203ac  sw          $v0, 0x3AC($s1)
    ctx->pc = 0x1da5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 2));
    // 0x1da5a8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1da5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1da5ac: 0xae2203b0  sw          $v0, 0x3B0($s1)
    ctx->pc = 0x1da5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 2));
    // 0x1da5b0: 0x8e0203b4  lw          $v0, 0x3B4($s0)
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x1da5b4: 0xae2203b4  sw          $v0, 0x3B4($s1)
    ctx->pc = 0x1da5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 2));
    // 0x1da5b8: 0x8e0203b8  lw          $v0, 0x3B8($s0)
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
    // 0x1da5bc: 0xae2203b8  sw          $v0, 0x3B8($s1)
    ctx->pc = 0x1da5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 2));
    // 0x1da5c0: 0x8e0203bc  lw          $v0, 0x3BC($s0)
    ctx->pc = 0x1da5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
    // 0x1da5c4: 0xae2203bc  sw          $v0, 0x3BC($s1)
    ctx->pc = 0x1da5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 956), GPR_U32(ctx, 2));
label_1da5c8:
    // 0x1da5c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da5cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da5d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1da5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1da5d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da5d8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1da5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1da5dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1da5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1da5e0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA5E0u;
    {
        const bool branch_taken_0x1da5e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5E0u;
            // 0x1da5e4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5e0) {
            ctx->pc = 0x1DA5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da5c8;
        }
    }
    ctx->pc = 0x1DA5E8u;
    // 0x1da5e8: 0x26060460  addiu       $a2, $s0, 0x460
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1120));
    // 0x1da5ec: 0x26250460  addiu       $a1, $s1, 0x460
    ctx->pc = 0x1da5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1120));
    // 0x1da5f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1da5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1da5f4:
    // 0x1da5f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da5f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da5fc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1da5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1da600: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da604: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1da604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1da608: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1da608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1da60c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA60Cu;
    {
        const bool branch_taken_0x1da60c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA60Cu;
            // 0x1da610: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da60c) {
            ctx->pc = 0x1DA5F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da5f4;
        }
    }
    ctx->pc = 0x1DA614u;
    // 0x1da614: 0x8e020500  lw          $v0, 0x500($s0)
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x1da618: 0x260605ec  addiu       $a2, $s0, 0x5EC
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1516));
    // 0x1da61c: 0x262505ec  addiu       $a1, $s1, 0x5EC
    ctx->pc = 0x1da61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1516));
    // 0x1da620: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1da620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da624: 0xae220500  sw          $v0, 0x500($s1)
    ctx->pc = 0x1da624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1280), GPR_U32(ctx, 2));
    // 0x1da628: 0x8e020504  lw          $v0, 0x504($s0)
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
    // 0x1da62c: 0xae220504  sw          $v0, 0x504($s1)
    ctx->pc = 0x1da62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 2));
    // 0x1da630: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x1da630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da634: 0xe6200508  swc1        $f0, 0x508($s1)
    ctx->pc = 0x1da634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1288), bits); }
    // 0x1da638: 0xc600050c  lwc1        $f0, 0x50C($s0)
    ctx->pc = 0x1da638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da63c: 0xe620050c  swc1        $f0, 0x50C($s1)
    ctx->pc = 0x1da63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1292), bits); }
    // 0x1da640: 0xc6030510  lwc1        $f3, 0x510($s0)
    ctx->pc = 0x1da640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da644: 0xc6020514  lwc1        $f2, 0x514($s0)
    ctx->pc = 0x1da644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da648: 0xc6010518  lwc1        $f1, 0x518($s0)
    ctx->pc = 0x1da648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da64c: 0xc600051c  lwc1        $f0, 0x51C($s0)
    ctx->pc = 0x1da64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da650: 0xe6230510  swc1        $f3, 0x510($s1)
    ctx->pc = 0x1da650u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1296), bits); }
    // 0x1da654: 0xe6220514  swc1        $f2, 0x514($s1)
    ctx->pc = 0x1da654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1300), bits); }
    // 0x1da658: 0xe6210518  swc1        $f1, 0x518($s1)
    ctx->pc = 0x1da658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1304), bits); }
    // 0x1da65c: 0xe620051c  swc1        $f0, 0x51C($s1)
    ctx->pc = 0x1da65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1308), bits); }
    // 0x1da660: 0xc6030520  lwc1        $f3, 0x520($s0)
    ctx->pc = 0x1da660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da664: 0xc6020524  lwc1        $f2, 0x524($s0)
    ctx->pc = 0x1da664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da668: 0xc6010528  lwc1        $f1, 0x528($s0)
    ctx->pc = 0x1da668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da66c: 0xc600052c  lwc1        $f0, 0x52C($s0)
    ctx->pc = 0x1da66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da670: 0xe6230520  swc1        $f3, 0x520($s1)
    ctx->pc = 0x1da670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1312), bits); }
    // 0x1da674: 0xe6220524  swc1        $f2, 0x524($s1)
    ctx->pc = 0x1da674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1316), bits); }
    // 0x1da678: 0xe6210528  swc1        $f1, 0x528($s1)
    ctx->pc = 0x1da678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1320), bits); }
    // 0x1da67c: 0xe620052c  swc1        $f0, 0x52C($s1)
    ctx->pc = 0x1da67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1324), bits); }
    // 0x1da680: 0xc6030530  lwc1        $f3, 0x530($s0)
    ctx->pc = 0x1da680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da684: 0xc6020534  lwc1        $f2, 0x534($s0)
    ctx->pc = 0x1da684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da688: 0xc6010538  lwc1        $f1, 0x538($s0)
    ctx->pc = 0x1da688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da68c: 0xc600053c  lwc1        $f0, 0x53C($s0)
    ctx->pc = 0x1da68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da690: 0xe6230530  swc1        $f3, 0x530($s1)
    ctx->pc = 0x1da690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1328), bits); }
    // 0x1da694: 0xe6220534  swc1        $f2, 0x534($s1)
    ctx->pc = 0x1da694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1332), bits); }
    // 0x1da698: 0xe6210538  swc1        $f1, 0x538($s1)
    ctx->pc = 0x1da698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1336), bits); }
    // 0x1da69c: 0xe620053c  swc1        $f0, 0x53C($s1)
    ctx->pc = 0x1da69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1340), bits); }
    // 0x1da6a0: 0xc6030540  lwc1        $f3, 0x540($s0)
    ctx->pc = 0x1da6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da6a4: 0xc6020544  lwc1        $f2, 0x544($s0)
    ctx->pc = 0x1da6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da6a8: 0xc6010548  lwc1        $f1, 0x548($s0)
    ctx->pc = 0x1da6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6ac: 0xc600054c  lwc1        $f0, 0x54C($s0)
    ctx->pc = 0x1da6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da6b0: 0xe6230540  swc1        $f3, 0x540($s1)
    ctx->pc = 0x1da6b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1344), bits); }
    // 0x1da6b4: 0xe6220544  swc1        $f2, 0x544($s1)
    ctx->pc = 0x1da6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1348), bits); }
    // 0x1da6b8: 0xe6210548  swc1        $f1, 0x548($s1)
    ctx->pc = 0x1da6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1352), bits); }
    // 0x1da6bc: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1da6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1da6c0: 0xc6030550  lwc1        $f3, 0x550($s0)
    ctx->pc = 0x1da6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da6c4: 0xc6020554  lwc1        $f2, 0x554($s0)
    ctx->pc = 0x1da6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da6c8: 0xc6010558  lwc1        $f1, 0x558($s0)
    ctx->pc = 0x1da6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6cc: 0xc600055c  lwc1        $f0, 0x55C($s0)
    ctx->pc = 0x1da6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da6d0: 0xe6230550  swc1        $f3, 0x550($s1)
    ctx->pc = 0x1da6d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
    // 0x1da6d4: 0xe6220554  swc1        $f2, 0x554($s1)
    ctx->pc = 0x1da6d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    // 0x1da6d8: 0xe6210558  swc1        $f1, 0x558($s1)
    ctx->pc = 0x1da6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1368), bits); }
    // 0x1da6dc: 0xe620055c  swc1        $f0, 0x55C($s1)
    ctx->pc = 0x1da6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
    // 0x1da6e0: 0xc6030560  lwc1        $f3, 0x560($s0)
    ctx->pc = 0x1da6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da6e4: 0xc6020564  lwc1        $f2, 0x564($s0)
    ctx->pc = 0x1da6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da6e8: 0xc6010568  lwc1        $f1, 0x568($s0)
    ctx->pc = 0x1da6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6ec: 0xc600056c  lwc1        $f0, 0x56C($s0)
    ctx->pc = 0x1da6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da6f0: 0xe6230560  swc1        $f3, 0x560($s1)
    ctx->pc = 0x1da6f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1376), bits); }
    // 0x1da6f4: 0xe6220564  swc1        $f2, 0x564($s1)
    ctx->pc = 0x1da6f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1380), bits); }
    // 0x1da6f8: 0xe6210568  swc1        $f1, 0x568($s1)
    ctx->pc = 0x1da6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1384), bits); }
    // 0x1da6fc: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1da6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1da700: 0xc6020570  lwc1        $f2, 0x570($s0)
    ctx->pc = 0x1da700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da704: 0xc6010574  lwc1        $f1, 0x574($s0)
    ctx->pc = 0x1da704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da708: 0xc6000578  lwc1        $f0, 0x578($s0)
    ctx->pc = 0x1da708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da70c: 0xe6220570  swc1        $f2, 0x570($s1)
    ctx->pc = 0x1da70cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
    // 0x1da710: 0xe6210574  swc1        $f1, 0x574($s1)
    ctx->pc = 0x1da710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
    // 0x1da714: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x1da714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x1da718: 0xc603057c  lwc1        $f3, 0x57C($s0)
    ctx->pc = 0x1da718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da71c: 0xc6020580  lwc1        $f2, 0x580($s0)
    ctx->pc = 0x1da71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da720: 0xc6010584  lwc1        $f1, 0x584($s0)
    ctx->pc = 0x1da720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da724: 0xc6000588  lwc1        $f0, 0x588($s0)
    ctx->pc = 0x1da724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da728: 0xe623057c  swc1        $f3, 0x57C($s1)
    ctx->pc = 0x1da728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1404), bits); }
    // 0x1da72c: 0xe6220580  swc1        $f2, 0x580($s1)
    ctx->pc = 0x1da72cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
    // 0x1da730: 0xe6210584  swc1        $f1, 0x584($s1)
    ctx->pc = 0x1da730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
    // 0x1da734: 0xe6200588  swc1        $f0, 0x588($s1)
    ctx->pc = 0x1da734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    // 0x1da738: 0xc603058c  lwc1        $f3, 0x58C($s0)
    ctx->pc = 0x1da738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da73c: 0xc6020590  lwc1        $f2, 0x590($s0)
    ctx->pc = 0x1da73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da740: 0xc6010594  lwc1        $f1, 0x594($s0)
    ctx->pc = 0x1da740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da744: 0xc6000598  lwc1        $f0, 0x598($s0)
    ctx->pc = 0x1da744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da748: 0xe623058c  swc1        $f3, 0x58C($s1)
    ctx->pc = 0x1da748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1420), bits); }
    // 0x1da74c: 0xe6220590  swc1        $f2, 0x590($s1)
    ctx->pc = 0x1da74cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x1da750: 0xe6210594  swc1        $f1, 0x594($s1)
    ctx->pc = 0x1da750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x1da754: 0xe6200598  swc1        $f0, 0x598($s1)
    ctx->pc = 0x1da754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1432), bits); }
    // 0x1da758: 0xc601059c  lwc1        $f1, 0x59C($s0)
    ctx->pc = 0x1da758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da75c: 0xc60005a0  lwc1        $f0, 0x5A0($s0)
    ctx->pc = 0x1da75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da760: 0xe621059c  swc1        $f1, 0x59C($s1)
    ctx->pc = 0x1da760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1436), bits); }
    // 0x1da764: 0xe62005a0  swc1        $f0, 0x5A0($s1)
    ctx->pc = 0x1da764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1440), bits); }
    // 0x1da768: 0xc60305a4  lwc1        $f3, 0x5A4($s0)
    ctx->pc = 0x1da768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da76c: 0xc60205a8  lwc1        $f2, 0x5A8($s0)
    ctx->pc = 0x1da76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da770: 0xc60105ac  lwc1        $f1, 0x5AC($s0)
    ctx->pc = 0x1da770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da774: 0xc60005b0  lwc1        $f0, 0x5B0($s0)
    ctx->pc = 0x1da774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da778: 0xe62305a4  swc1        $f3, 0x5A4($s1)
    ctx->pc = 0x1da778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1444), bits); }
    // 0x1da77c: 0xe62205a8  swc1        $f2, 0x5A8($s1)
    ctx->pc = 0x1da77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    // 0x1da780: 0xe62105ac  swc1        $f1, 0x5AC($s1)
    ctx->pc = 0x1da780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1452), bits); }
    // 0x1da784: 0xe62005b0  swc1        $f0, 0x5B0($s1)
    ctx->pc = 0x1da784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1456), bits); }
    // 0x1da788: 0xc60305b4  lwc1        $f3, 0x5B4($s0)
    ctx->pc = 0x1da788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da78c: 0xc60205b8  lwc1        $f2, 0x5B8($s0)
    ctx->pc = 0x1da78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da790: 0xc60105bc  lwc1        $f1, 0x5BC($s0)
    ctx->pc = 0x1da790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da794: 0xc60005c0  lwc1        $f0, 0x5C0($s0)
    ctx->pc = 0x1da794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da798: 0xe62305b4  swc1        $f3, 0x5B4($s1)
    ctx->pc = 0x1da798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1460), bits); }
    // 0x1da79c: 0xe62205b8  swc1        $f2, 0x5B8($s1)
    ctx->pc = 0x1da79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1464), bits); }
    // 0x1da7a0: 0xe62105bc  swc1        $f1, 0x5BC($s1)
    ctx->pc = 0x1da7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1468), bits); }
    // 0x1da7a4: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x1da7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x1da7a8: 0xc60305c4  lwc1        $f3, 0x5C4($s0)
    ctx->pc = 0x1da7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da7ac: 0xc60205c8  lwc1        $f2, 0x5C8($s0)
    ctx->pc = 0x1da7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da7b0: 0xc60105cc  lwc1        $f1, 0x5CC($s0)
    ctx->pc = 0x1da7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da7b4: 0xc60005d0  lwc1        $f0, 0x5D0($s0)
    ctx->pc = 0x1da7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da7b8: 0xe62305c4  swc1        $f3, 0x5C4($s1)
    ctx->pc = 0x1da7b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    // 0x1da7bc: 0xe62205c8  swc1        $f2, 0x5C8($s1)
    ctx->pc = 0x1da7bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x1da7c0: 0xe62105cc  swc1        $f1, 0x5CC($s1)
    ctx->pc = 0x1da7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1484), bits); }
    // 0x1da7c4: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x1da7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x1da7c8: 0xc60305d4  lwc1        $f3, 0x5D4($s0)
    ctx->pc = 0x1da7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da7cc: 0xc60205d8  lwc1        $f2, 0x5D8($s0)
    ctx->pc = 0x1da7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da7d0: 0xc60105dc  lwc1        $f1, 0x5DC($s0)
    ctx->pc = 0x1da7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da7d4: 0xc60005e0  lwc1        $f0, 0x5E0($s0)
    ctx->pc = 0x1da7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da7d8: 0xe62305d4  swc1        $f3, 0x5D4($s1)
    ctx->pc = 0x1da7d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1492), bits); }
    // 0x1da7dc: 0xe62205d8  swc1        $f2, 0x5D8($s1)
    ctx->pc = 0x1da7dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
    // 0x1da7e0: 0xe62105dc  swc1        $f1, 0x5DC($s1)
    ctx->pc = 0x1da7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
    // 0x1da7e4: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x1da7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x1da7e8: 0x8e0205e4  lw          $v0, 0x5E4($s0)
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1508)));
    // 0x1da7ec: 0xae2205e4  sw          $v0, 0x5E4($s1)
    ctx->pc = 0x1da7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 2));
    // 0x1da7f0: 0x8e0205e8  lw          $v0, 0x5E8($s0)
    ctx->pc = 0x1da7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
    // 0x1da7f4: 0xae2205e8  sw          $v0, 0x5E8($s1)
    ctx->pc = 0x1da7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 2));
label_1da7f8:
    // 0x1da7f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da7fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da800: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1da800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1da804: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da808: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1da80c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1da80cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1da810: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA810u;
    {
        const bool branch_taken_0x1da810 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA810u;
            // 0x1da814: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da810) {
            ctx->pc = 0x1DA7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da7f8;
        }
    }
    ctx->pc = 0x1DA818u;
    // 0x1da818: 0x8e02064c  lw          $v0, 0x64C($s0)
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1612)));
    // 0x1da81c: 0x2605067c  addiu       $a1, $s0, 0x67C
    ctx->pc = 0x1da81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1660));
    // 0x1da820: 0x2624067c  addiu       $a0, $s1, 0x67C
    ctx->pc = 0x1da820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1660));
    // 0x1da824: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1da824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1da828: 0xae22064c  sw          $v0, 0x64C($s1)
    ctx->pc = 0x1da828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 2));
    // 0x1da82c: 0x8e020650  lw          $v0, 0x650($s0)
    ctx->pc = 0x1da82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x1da830: 0xae220650  sw          $v0, 0x650($s1)
    ctx->pc = 0x1da830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 2));
    // 0x1da834: 0xc6030660  lwc1        $f3, 0x660($s0)
    ctx->pc = 0x1da834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da838: 0xc6020664  lwc1        $f2, 0x664($s0)
    ctx->pc = 0x1da838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da83c: 0xc6010668  lwc1        $f1, 0x668($s0)
    ctx->pc = 0x1da83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da840: 0xc600066c  lwc1        $f0, 0x66C($s0)
    ctx->pc = 0x1da840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da844: 0xe6230660  swc1        $f3, 0x660($s1)
    ctx->pc = 0x1da844u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1da848: 0xe6220664  swc1        $f2, 0x664($s1)
    ctx->pc = 0x1da848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1636), bits); }
    // 0x1da84c: 0xe6210668  swc1        $f1, 0x668($s1)
    ctx->pc = 0x1da84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1640), bits); }
    // 0x1da850: 0xe620066c  swc1        $f0, 0x66C($s1)
    ctx->pc = 0x1da850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1644), bits); }
    // 0x1da854: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x1da854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x1da858: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1da858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x1da85c: 0x8e020674  lw          $v0, 0x674($s0)
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
    // 0x1da860: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x1da860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
    // 0x1da864: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x1da864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x1da868: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x1da868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
label_1da86c:
    // 0x1da86c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1da86cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da870: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da874: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1da874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da878: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1da878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1da87c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1da87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1da880: 0x0  nop
    ctx->pc = 0x1da880u;
    // NOP
    // 0x1da884: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA884u;
    {
        const bool branch_taken_0x1da884 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1da884) {
            ctx->pc = 0x1DA86Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da86c;
        }
    }
    ctx->pc = 0x1DA88Cu;
    // 0x1da88c: 0x8602068a  lh          $v0, 0x68A($s0)
    ctx->pc = 0x1da88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1674)));
    // 0x1da890: 0x260506bc  addiu       $a1, $s0, 0x6BC
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
    // 0x1da894: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
    // 0x1da898: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1da89c: 0xa622068a  sh          $v0, 0x68A($s1)
    ctx->pc = 0x1da89cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1674), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da8a0: 0xc6030690  lwc1        $f3, 0x690($s0)
    ctx->pc = 0x1da8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da8a4: 0xc6020694  lwc1        $f2, 0x694($s0)
    ctx->pc = 0x1da8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da8a8: 0xc6010698  lwc1        $f1, 0x698($s0)
    ctx->pc = 0x1da8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da8ac: 0xc600069c  lwc1        $f0, 0x69C($s0)
    ctx->pc = 0x1da8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8b0: 0xe6230690  swc1        $f3, 0x690($s1)
    ctx->pc = 0x1da8b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
    // 0x1da8b4: 0xe6220694  swc1        $f2, 0x694($s1)
    ctx->pc = 0x1da8b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
    // 0x1da8b8: 0xe6210698  swc1        $f1, 0x698($s1)
    ctx->pc = 0x1da8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1688), bits); }
    // 0x1da8bc: 0xe620069c  swc1        $f0, 0x69C($s1)
    ctx->pc = 0x1da8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1692), bits); }
    // 0x1da8c0: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x1da8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x1da8c4: 0xae2206a0  sw          $v0, 0x6A0($s1)
    ctx->pc = 0x1da8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 2));
    // 0x1da8c8: 0x8e0206a4  lw          $v0, 0x6A4($s0)
    ctx->pc = 0x1da8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
    // 0x1da8cc: 0xae2206a4  sw          $v0, 0x6A4($s1)
    ctx->pc = 0x1da8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 2));
    // 0x1da8d0: 0x8e0206a8  lw          $v0, 0x6A8($s0)
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x1da8d4: 0xae2206a8  sw          $v0, 0x6A8($s1)
    ctx->pc = 0x1da8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
    // 0x1da8d8: 0xc60006ac  lwc1        $f0, 0x6AC($s0)
    ctx->pc = 0x1da8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8dc: 0xe62006ac  swc1        $f0, 0x6AC($s1)
    ctx->pc = 0x1da8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1708), bits); }
    // 0x1da8e0: 0x8e0206b0  lw          $v0, 0x6B0($s0)
    ctx->pc = 0x1da8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x1da8e4: 0xae2206b0  sw          $v0, 0x6B0($s1)
    ctx->pc = 0x1da8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 2));
    // 0x1da8e8: 0x860206b4  lh          $v0, 0x6B4($s0)
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x1da8ec: 0xa62206b4  sh          $v0, 0x6B4($s1)
    ctx->pc = 0x1da8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1716), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da8f0: 0x8e0206b8  lw          $v0, 0x6B8($s0)
    ctx->pc = 0x1da8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1720)));
    // 0x1da8f4: 0xae2206b8  sw          $v0, 0x6B8($s1)
    ctx->pc = 0x1da8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 2));
label_1da8f8:
    // 0x1da8f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1da8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da8fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da900: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1da904: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1da904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da908: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1da908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1da90c: 0x0  nop
    ctx->pc = 0x1da90cu;
    // NOP
    // 0x1da910: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA910u;
    {
        const bool branch_taken_0x1da910 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1da910) {
            ctx->pc = 0x1DA8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da8f8;
        }
    }
    ctx->pc = 0x1DA918u;
    // 0x1da918: 0x86020710  lh          $v0, 0x710($s0)
    ctx->pc = 0x1da918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1808)));
    // 0x1da91c: 0x26050734  addiu       $a1, $s0, 0x734
    ctx->pc = 0x1da91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1844));
    // 0x1da920: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x1da920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
    // 0x1da924: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1da928: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x1da928u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da92c: 0x86020712  lh          $v0, 0x712($s0)
    ctx->pc = 0x1da92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1810)));
    // 0x1da930: 0xa6220712  sh          $v0, 0x712($s1)
    ctx->pc = 0x1da930u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1810), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da934: 0x8e020714  lw          $v0, 0x714($s0)
    ctx->pc = 0x1da934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1812)));
    // 0x1da938: 0xae220714  sw          $v0, 0x714($s1)
    ctx->pc = 0x1da938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 2));
    // 0x1da93c: 0x8e020718  lw          $v0, 0x718($s0)
    ctx->pc = 0x1da93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1816)));
    // 0x1da940: 0xae220718  sw          $v0, 0x718($s1)
    ctx->pc = 0x1da940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1816), GPR_U32(ctx, 2));
    // 0x1da944: 0x8602071c  lh          $v0, 0x71C($s0)
    ctx->pc = 0x1da944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1820)));
    // 0x1da948: 0xa622071c  sh          $v0, 0x71C($s1)
    ctx->pc = 0x1da948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1820), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da94c: 0x8e020720  lw          $v0, 0x720($s0)
    ctx->pc = 0x1da94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x1da950: 0xae220720  sw          $v0, 0x720($s1)
    ctx->pc = 0x1da950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1824), GPR_U32(ctx, 2));
    // 0x1da954: 0x8e020724  lw          $v0, 0x724($s0)
    ctx->pc = 0x1da954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1828)));
    // 0x1da958: 0xae220724  sw          $v0, 0x724($s1)
    ctx->pc = 0x1da958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1828), GPR_U32(ctx, 2));
    // 0x1da95c: 0x86020728  lh          $v0, 0x728($s0)
    ctx->pc = 0x1da95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1832)));
    // 0x1da960: 0xa6220728  sh          $v0, 0x728($s1)
    ctx->pc = 0x1da960u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1832), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da964: 0x8602072a  lh          $v0, 0x72A($s0)
    ctx->pc = 0x1da964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1834)));
    // 0x1da968: 0xa622072a  sh          $v0, 0x72A($s1)
    ctx->pc = 0x1da968u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1834), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da96c: 0x8e02072c  lw          $v0, 0x72C($s0)
    ctx->pc = 0x1da96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1836)));
    // 0x1da970: 0xae22072c  sw          $v0, 0x72C($s1)
    ctx->pc = 0x1da970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1836), GPR_U32(ctx, 2));
    // 0x1da974: 0x86020730  lh          $v0, 0x730($s0)
    ctx->pc = 0x1da974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x1da978: 0xa6220730  sh          $v0, 0x730($s1)
    ctx->pc = 0x1da978u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1840), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da97c: 0x86020732  lh          $v0, 0x732($s0)
    ctx->pc = 0x1da97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1842)));
    // 0x1da980: 0xa6220732  sh          $v0, 0x732($s1)
    ctx->pc = 0x1da980u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1842), (uint16_t)GPR_U32(ctx, 2));
label_1da984:
    // 0x1da984: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1da984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da988: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da98c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1da98cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da990: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1da990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1da994: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1da994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1da998: 0x0  nop
    ctx->pc = 0x1da998u;
    // NOP
    // 0x1da99c: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA99Cu;
    {
        const bool branch_taken_0x1da99c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1da99c) {
            ctx->pc = 0x1DA984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da984;
        }
    }
    ctx->pc = 0x1DA9A4u;
    // 0x1da9a4: 0x8602075e  lh          $v0, 0x75E($s0)
    ctx->pc = 0x1da9a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1886)));
    // 0x1da9a8: 0x260607e4  addiu       $a2, $s0, 0x7E4
    ctx->pc = 0x1da9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2020));
    // 0x1da9ac: 0x262507e4  addiu       $a1, $s1, 0x7E4
    ctx->pc = 0x1da9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2020));
    // 0x1da9b0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1da9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1da9b4: 0xa622075e  sh          $v0, 0x75E($s1)
    ctx->pc = 0x1da9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1886), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da9b8: 0xc6000760  lwc1        $f0, 0x760($s0)
    ctx->pc = 0x1da9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da9bc: 0xe6200760  swc1        $f0, 0x760($s1)
    ctx->pc = 0x1da9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1888), bits); }
    // 0x1da9c0: 0x86020764  lh          $v0, 0x764($s0)
    ctx->pc = 0x1da9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1892)));
    // 0x1da9c4: 0xa6220764  sh          $v0, 0x764($s1)
    ctx->pc = 0x1da9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1892), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da9c8: 0x8e020768  lw          $v0, 0x768($s0)
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
    // 0x1da9cc: 0xae220768  sw          $v0, 0x768($s1)
    ctx->pc = 0x1da9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 2));
    // 0x1da9d0: 0x8202076c  lb          $v0, 0x76C($s0)
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x1da9d4: 0xa222076c  sb          $v0, 0x76C($s1)
    ctx->pc = 0x1da9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da9d8: 0x8202076d  lb          $v0, 0x76D($s0)
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1901)));
    // 0x1da9dc: 0xa222076d  sb          $v0, 0x76D($s1)
    ctx->pc = 0x1da9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da9e0: 0x8202076e  lb          $v0, 0x76E($s0)
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1902)));
    // 0x1da9e4: 0xa222076e  sb          $v0, 0x76E($s1)
    ctx->pc = 0x1da9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1902), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da9e8: 0x86020770  lh          $v0, 0x770($s0)
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
    // 0x1da9ec: 0xa6220770  sh          $v0, 0x770($s1)
    ctx->pc = 0x1da9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da9f0: 0x86020772  lh          $v0, 0x772($s0)
    ctx->pc = 0x1da9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1906)));
    // 0x1da9f4: 0xa6220772  sh          $v0, 0x772($s1)
    ctx->pc = 0x1da9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 2));
    // 0x1da9f8: 0x8e020774  lw          $v0, 0x774($s0)
    ctx->pc = 0x1da9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
    // 0x1da9fc: 0xae220774  sw          $v0, 0x774($s1)
    ctx->pc = 0x1da9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1908), GPR_U32(ctx, 2));
    // 0x1daa00: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
    // 0x1daa04: 0xae220778  sw          $v0, 0x778($s1)
    ctx->pc = 0x1daa04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1912), GPR_U32(ctx, 2));
    // 0x1daa08: 0x8e02077c  lw          $v0, 0x77C($s0)
    ctx->pc = 0x1daa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
    // 0x1daa0c: 0xae22077c  sw          $v0, 0x77C($s1)
    ctx->pc = 0x1daa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1916), GPR_U32(ctx, 2));
    // 0x1daa10: 0x7a030780  lq          $v1, 0x780($s0)
    ctx->pc = 0x1daa10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 1920)));
    // 0x1daa14: 0x7a020790  lq          $v0, 0x790($s0)
    ctx->pc = 0x1daa14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 1936)));
    // 0x1daa18: 0x7e230780  sq          $v1, 0x780($s1)
    ctx->pc = 0x1daa18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1920), GPR_VEC(ctx, 3));
    // 0x1daa1c: 0x7e220790  sq          $v0, 0x790($s1)
    ctx->pc = 0x1daa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1936), GPR_VEC(ctx, 2));
    // 0x1daa20: 0xc60307a0  lwc1        $f3, 0x7A0($s0)
    ctx->pc = 0x1daa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1daa24: 0xc60207a4  lwc1        $f2, 0x7A4($s0)
    ctx->pc = 0x1daa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1daa28: 0xc60107a8  lwc1        $f1, 0x7A8($s0)
    ctx->pc = 0x1daa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daa2c: 0xc60007ac  lwc1        $f0, 0x7AC($s0)
    ctx->pc = 0x1daa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa30: 0xe62307a0  swc1        $f3, 0x7A0($s1)
    ctx->pc = 0x1daa30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1952), bits); }
    // 0x1daa34: 0xe62207a4  swc1        $f2, 0x7A4($s1)
    ctx->pc = 0x1daa34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1956), bits); }
    // 0x1daa38: 0xe62107a8  swc1        $f1, 0x7A8($s1)
    ctx->pc = 0x1daa38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1960), bits); }
    // 0x1daa3c: 0xe62007ac  swc1        $f0, 0x7AC($s1)
    ctx->pc = 0x1daa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1964), bits); }
    // 0x1daa40: 0xc60007b0  lwc1        $f0, 0x7B0($s0)
    ctx->pc = 0x1daa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa44: 0xe62007b0  swc1        $f0, 0x7B0($s1)
    ctx->pc = 0x1daa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1968), bits); }
    // 0x1daa48: 0xc60007b4  lwc1        $f0, 0x7B4($s0)
    ctx->pc = 0x1daa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa4c: 0xe62007b4  swc1        $f0, 0x7B4($s1)
    ctx->pc = 0x1daa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1972), bits); }
    // 0x1daa50: 0x8e0207b8  lw          $v0, 0x7B8($s0)
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1976)));
    // 0x1daa54: 0xae2207b8  sw          $v0, 0x7B8($s1)
    ctx->pc = 0x1daa54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 2));
    // 0x1daa58: 0xc60007bc  lwc1        $f0, 0x7BC($s0)
    ctx->pc = 0x1daa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa5c: 0xe62007bc  swc1        $f0, 0x7BC($s1)
    ctx->pc = 0x1daa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1980), bits); }
    // 0x1daa60: 0x8e0207c0  lw          $v0, 0x7C0($s0)
    ctx->pc = 0x1daa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x1daa64: 0xae2207c0  sw          $v0, 0x7C0($s1)
    ctx->pc = 0x1daa64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
    // 0x1daa68: 0xc60007c4  lwc1        $f0, 0x7C4($s0)
    ctx->pc = 0x1daa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa6c: 0xe62007c4  swc1        $f0, 0x7C4($s1)
    ctx->pc = 0x1daa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1988), bits); }
    // 0x1daa70: 0x8e0207c8  lw          $v0, 0x7C8($s0)
    ctx->pc = 0x1daa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x1daa74: 0xae2207c8  sw          $v0, 0x7C8($s1)
    ctx->pc = 0x1daa74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 2));
    // 0x1daa78: 0x8e0207cc  lw          $v0, 0x7CC($s0)
    ctx->pc = 0x1daa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1996)));
    // 0x1daa7c: 0xae2207cc  sw          $v0, 0x7CC($s1)
    ctx->pc = 0x1daa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 2));
    // 0x1daa80: 0xc60107d0  lwc1        $f1, 0x7D0($s0)
    ctx->pc = 0x1daa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daa84: 0xc60007d4  lwc1        $f0, 0x7D4($s0)
    ctx->pc = 0x1daa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa88: 0xe62107d0  swc1        $f1, 0x7D0($s1)
    ctx->pc = 0x1daa88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2000), bits); }
    // 0x1daa8c: 0xe62007d4  swc1        $f0, 0x7D4($s1)
    ctx->pc = 0x1daa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2004), bits); }
    // 0x1daa90: 0x8e0207d8  lw          $v0, 0x7D8($s0)
    ctx->pc = 0x1daa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x1daa94: 0xae2207d8  sw          $v0, 0x7D8($s1)
    ctx->pc = 0x1daa94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2008), GPR_U32(ctx, 2));
    // 0x1daa98: 0x8e0207dc  lw          $v0, 0x7DC($s0)
    ctx->pc = 0x1daa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
    // 0x1daa9c: 0xae2207dc  sw          $v0, 0x7DC($s1)
    ctx->pc = 0x1daa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 2));
    // 0x1daaa0: 0x820207e0  lb          $v0, 0x7E0($s0)
    ctx->pc = 0x1daaa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2016)));
    // 0x1daaa4: 0xa22207e0  sb          $v0, 0x7E0($s1)
    ctx->pc = 0x1daaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2016), (uint8_t)GPR_U32(ctx, 2));
label_1daaa8:
    // 0x1daaa8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1daaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1daaac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1daaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1daab0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1daab4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1daab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1daab8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1daab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1daabc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1daabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1daac0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DAAC0u;
    {
        const bool branch_taken_0x1daac0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAC0u;
            // 0x1daac4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daac0) {
            ctx->pc = 0x1DAAA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1daaa8;
        }
    }
    ctx->pc = 0x1DAAC8u;
    // 0x1daac8: 0x82020904  lb          $v0, 0x904($s0)
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2308)));
    // 0x1daacc: 0x26050910  addiu       $a1, $s0, 0x910
    ctx->pc = 0x1daaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
    // 0x1daad0: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
    // 0x1daad4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1daad8: 0xa2220904  sb          $v0, 0x904($s1)
    ctx->pc = 0x1daad8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2308), (uint8_t)GPR_U32(ctx, 2));
label_1daadc:
    // 0x1daadc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1daadcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1daae0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1daae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1daae4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1daae4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1daae8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1daae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1daaec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1daaf0: 0x0  nop
    ctx->pc = 0x1daaf0u;
    // NOP
    // 0x1daaf4: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DAAF4u;
    {
        const bool branch_taken_0x1daaf4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1daaf4) {
            ctx->pc = 0x1DAADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1daadc;
        }
    }
    ctx->pc = 0x1DAAFCu;
    // 0x1daafc: 0x26060a20  addiu       $a2, $s0, 0xA20
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2592));
    // 0x1dab00: 0x26250a20  addiu       $a1, $s1, 0xA20
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2592));
    // 0x1dab04: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1dab08:
    // 0x1dab08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dab0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1dab10: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1dab14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dab14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dab18: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1dab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1dab1c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1dab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1dab20: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DAB20u;
    {
        const bool branch_taken_0x1dab20 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DAB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB20u;
            // 0x1dab24: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab20) {
            ctx->pc = 0x1DAB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dab08;
        }
    }
    ctx->pc = 0x1DAB28u;
    // 0x1dab28: 0x82020bd8  lb          $v0, 0xBD8($s0)
    ctx->pc = 0x1dab28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3032)));
    // 0x1dab2c: 0x26060c00  addiu       $a2, $s0, 0xC00
    ctx->pc = 0x1dab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
    // 0x1dab30: 0x26250c00  addiu       $a1, $s1, 0xC00
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1dab34: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dab38: 0xa2220bd8  sb          $v0, 0xBD8($s1)
    ctx->pc = 0x1dab38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3032), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dab3c: 0x8e020bdc  lw          $v0, 0xBDC($s0)
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3036)));
    // 0x1dab40: 0xae220bdc  sw          $v0, 0xBDC($s1)
    ctx->pc = 0x1dab40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 2));
    // 0x1dab44: 0x8e020be0  lw          $v0, 0xBE0($s0)
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3040)));
    // 0x1dab48: 0xae220be0  sw          $v0, 0xBE0($s1)
    ctx->pc = 0x1dab48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3040), GPR_U32(ctx, 2));
    // 0x1dab4c: 0x8e020be4  lw          $v0, 0xBE4($s0)
    ctx->pc = 0x1dab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3044)));
    // 0x1dab50: 0xae220be4  sw          $v0, 0xBE4($s1)
    ctx->pc = 0x1dab50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3044), GPR_U32(ctx, 2));
    // 0x1dab54: 0x8e020be8  lw          $v0, 0xBE8($s0)
    ctx->pc = 0x1dab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3048)));
    // 0x1dab58: 0xae220be8  sw          $v0, 0xBE8($s1)
    ctx->pc = 0x1dab58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3048), GPR_U32(ctx, 2));
    // 0x1dab5c: 0x8e020bec  lw          $v0, 0xBEC($s0)
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3052)));
    // 0x1dab60: 0xae220bec  sw          $v0, 0xBEC($s1)
    ctx->pc = 0x1dab60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3052), GPR_U32(ctx, 2));
    // 0x1dab64: 0x8e020bf0  lw          $v0, 0xBF0($s0)
    ctx->pc = 0x1dab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3056)));
    // 0x1dab68: 0xae220bf0  sw          $v0, 0xBF0($s1)
    ctx->pc = 0x1dab68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3056), GPR_U32(ctx, 2));
    // 0x1dab6c: 0x82020bf4  lb          $v0, 0xBF4($s0)
    ctx->pc = 0x1dab6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3060)));
    // 0x1dab70: 0xa2220bf4  sb          $v0, 0xBF4($s1)
    ctx->pc = 0x1dab70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3060), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dab74: 0x82020bf5  lb          $v0, 0xBF5($s0)
    ctx->pc = 0x1dab74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3061)));
    // 0x1dab78: 0xa2220bf5  sb          $v0, 0xBF5($s1)
    ctx->pc = 0x1dab78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3061), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dab7c: 0xc6010bf8  lwc1        $f1, 0xBF8($s0)
    ctx->pc = 0x1dab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dab80: 0xc6000bfc  lwc1        $f0, 0xBFC($s0)
    ctx->pc = 0x1dab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dab84: 0xe6210bf8  swc1        $f1, 0xBF8($s1)
    ctx->pc = 0x1dab84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3064), bits); }
    // 0x1dab88: 0xe6200bfc  swc1        $f0, 0xBFC($s1)
    ctx->pc = 0x1dab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3068), bits); }
label_1dab8c:
    // 0x1dab8c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1dab8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dab90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1dab94: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1dab94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1dab98: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1dab98u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1dab9c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1daba0: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x1daba0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x1daba4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DABA4u;
    {
        const bool branch_taken_0x1daba4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABA4u;
            // 0x1daba8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daba4) {
            ctx->pc = 0x1DAB8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dab8c;
        }
    }
    ctx->pc = 0x1DABACu;
    // 0x1dabac: 0x26060d00  addiu       $a2, $s0, 0xD00
    ctx->pc = 0x1dabacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    // 0x1dabb0: 0x26250d00  addiu       $a1, $s1, 0xD00
    ctx->pc = 0x1dabb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3328));
    // 0x1dabb4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1dabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1dabb8:
    // 0x1dabb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dabbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1dabc0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1dabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1dabc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dabc8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1dabcc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1dabccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1dabd0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DABD0u;
    {
        const bool branch_taken_0x1dabd0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABD0u;
            // 0x1dabd4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabd0) {
            ctx->pc = 0x1DABB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dabb8;
        }
    }
    ctx->pc = 0x1DABD8u;
    // 0x1dabd8: 0xc6030f40  lwc1        $f3, 0xF40($s0)
    ctx->pc = 0x1dabd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dabdc: 0x26060f60  addiu       $a2, $s0, 0xF60
    ctx->pc = 0x1dabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3936));
    // 0x1dabe0: 0xc6020f44  lwc1        $f2, 0xF44($s0)
    ctx->pc = 0x1dabe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dabe4: 0x26250f60  addiu       $a1, $s1, 0xF60
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3936));
    // 0x1dabe8: 0xc6010f48  lwc1        $f1, 0xF48($s0)
    ctx->pc = 0x1dabe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dabec: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1dabecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1dabf0: 0xc6000f4c  lwc1        $f0, 0xF4C($s0)
    ctx->pc = 0x1dabf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dabf4: 0xe6230f40  swc1        $f3, 0xF40($s1)
    ctx->pc = 0x1dabf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3904), bits); }
    // 0x1dabf8: 0xe6220f44  swc1        $f2, 0xF44($s1)
    ctx->pc = 0x1dabf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3908), bits); }
    // 0x1dabfc: 0xe6210f48  swc1        $f1, 0xF48($s1)
    ctx->pc = 0x1dabfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3912), bits); }
    // 0x1dac00: 0xe6200f4c  swc1        $f0, 0xF4C($s1)
    ctx->pc = 0x1dac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3916), bits); }
    // 0x1dac04: 0xc6000f50  lwc1        $f0, 0xF50($s0)
    ctx->pc = 0x1dac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dac08: 0xe6200f50  swc1        $f0, 0xF50($s1)
    ctx->pc = 0x1dac08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3920), bits); }
    // 0x1dac0c: 0xc6000f54  lwc1        $f0, 0xF54($s0)
    ctx->pc = 0x1dac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dac10: 0xe6200f54  swc1        $f0, 0xF54($s1)
    ctx->pc = 0x1dac10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3924), bits); }
    // 0x1dac14: 0xc6000f58  lwc1        $f0, 0xF58($s0)
    ctx->pc = 0x1dac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dac18: 0xe6200f58  swc1        $f0, 0xF58($s1)
    ctx->pc = 0x1dac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3928), bits); }
    // 0x1dac1c: 0x8e020f5c  lw          $v0, 0xF5C($s0)
    ctx->pc = 0x1dac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3932)));
    // 0x1dac20: 0xae220f5c  sw          $v0, 0xF5C($s1)
    ctx->pc = 0x1dac20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3932), GPR_U32(ctx, 2));
label_1dac24:
    // 0x1dac24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dac28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1dac2c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1dac30: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dac30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dac34: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1dac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1dac38: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1dac38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1dac3c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DAC3Cu;
    {
        const bool branch_taken_0x1dac3c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DAC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC3Cu;
            // 0x1dac40: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac3c) {
            ctx->pc = 0x1DAC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dac24;
        }
    }
    ctx->pc = 0x1DAC44u;
    // 0x1dac44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dac44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dac4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dac4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dac50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dac50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dac54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC54u;
            // 0x1dac58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DAC5Cu;
}
