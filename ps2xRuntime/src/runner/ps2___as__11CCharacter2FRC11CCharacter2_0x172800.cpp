#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__11CCharacter2FRC11CCharacter2
// Address: 0x172800 - 0x172ddc
void ps2___as__11CCharacter2FRC11CCharacter2_0x172800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__11CCharacter2FRC11CCharacter2_0x172800");
#endif

    switch (ctx->pc) {
        case 0x172904u: goto label_172904;
        case 0x172930u: goto label_172930;
        case 0x1729dcu: goto label_1729dc;
        case 0x172a58u: goto label_172a58;
        case 0x172b74u: goto label_172b74;
        case 0x172ba0u: goto label_172ba0;
        case 0x172da4u: goto label_172da4;
        default: break;
    }

    ctx->pc = 0x172800u;

    // 0x172800: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x172800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172804: 0x24a800b0  addiu       $t0, $a1, 0xB0
    ctx->pc = 0x172804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x172808: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x172808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17280c: 0x248700b0  addiu       $a3, $a0, 0xB0
    ctx->pc = 0x17280cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x172810: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x172810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172814: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x172814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172818: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x172818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17281c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x17281cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x172820: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x172820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x172824: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x172824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x172828: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x172828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x17282c: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x17282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172830: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x172830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172834: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x172834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172838: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x172838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17283c: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x17283cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x172840: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x172840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x172844: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x172844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x172848: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x172848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x17284c: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x17284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172850: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x172850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172854: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x172854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172858: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x172858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17285c: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x17285cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x172860: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x172860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x172864: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x172864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x172868: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x172868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x17286c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x172870: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x172870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x172874: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x172878: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x172878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x17287c: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x17287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172880: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x172880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x172884: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x172888: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x172888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x17288c: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x17288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172890: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x172890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x172894: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x172894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172898: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x172898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x17289c: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x17289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728a0: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x1728a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x1728a4: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1728a8: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1728a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1728ac: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x1728acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1728b0: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x1728b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x1728b4: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1728b8: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x1728b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x1728bc: 0xc4a30080  lwc1        $f3, 0x80($a1)
    ctx->pc = 0x1728bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1728c0: 0xc4a20084  lwc1        $f2, 0x84($a1)
    ctx->pc = 0x1728c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1728c4: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x1728c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1728c8: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x1728c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728cc: 0xe4830080  swc1        $f3, 0x80($a0)
    ctx->pc = 0x1728ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1728d0: 0xe4820084  swc1        $f2, 0x84($a0)
    ctx->pc = 0x1728d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1728d4: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x1728d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1728d8: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1728d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1728dc: 0xc4a30090  lwc1        $f3, 0x90($a1)
    ctx->pc = 0x1728dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1728e0: 0xc4a20094  lwc1        $f2, 0x94($a1)
    ctx->pc = 0x1728e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1728e4: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x1728e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1728e8: 0xc4a0009c  lwc1        $f0, 0x9C($a1)
    ctx->pc = 0x1728e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728ec: 0xe4830090  swc1        $f3, 0x90($a0)
    ctx->pc = 0x1728ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1728f0: 0xe4820094  swc1        $f2, 0x94($a0)
    ctx->pc = 0x1728f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1728f4: 0xe4810098  swc1        $f1, 0x98($a0)
    ctx->pc = 0x1728f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1728f8: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x1728f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x1728fc: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x1728fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172900: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x172900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_172904:
    // 0x172904: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x172904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172908: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x172908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17290c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x17290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x172910: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x172910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x172914: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x172918: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x172918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x17291c: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17291Cu;
    {
        const bool branch_taken_0x17291c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x172920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17291Cu;
            // 0x172920: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17291c) {
            ctx->pc = 0x172904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172904;
        }
    }
    ctx->pc = 0x172924u;
    // 0x172924: 0x24a800f0  addiu       $t0, $a1, 0xF0
    ctx->pc = 0x172924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x172928: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x172928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x17292c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17292cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_172930:
    // 0x172930: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x172930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172934: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x172938: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x17293c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x17293cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x172940: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x172944: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x172944u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x172948: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172948u;
    {
        const bool branch_taken_0x172948 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x17294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172948u;
            // 0x17294c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172948) {
            ctx->pc = 0x172930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172930;
        }
    }
    ctx->pc = 0x172950u;
    // 0x172950: 0xc4a00100  lwc1        $f0, 0x100($a1)
    ctx->pc = 0x172950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172954: 0x24a80140  addiu       $t0, $a1, 0x140
    ctx->pc = 0x172954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x172958: 0x24870140  addiu       $a3, $a0, 0x140
    ctx->pc = 0x172958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x17295c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x172960: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x172960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x172964: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x172964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x172968: 0xac820104  sw          $v0, 0x104($a0)
    ctx->pc = 0x172968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
    // 0x17296c: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x17296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x172970: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x172970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
    // 0x172974: 0xc4a0010c  lwc1        $f0, 0x10C($a1)
    ctx->pc = 0x172974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172978: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x172978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x17297c: 0xc4a00110  lwc1        $f0, 0x110($a1)
    ctx->pc = 0x17297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172980: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x172980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x172984: 0xc4a00114  lwc1        $f0, 0x114($a1)
    ctx->pc = 0x172984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172988: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x172988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x17298c: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x17298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x172990: 0xac820118  sw          $v0, 0x118($a0)
    ctx->pc = 0x172990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
    // 0x172994: 0x8ca2011c  lw          $v0, 0x11C($a1)
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x172998: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x172998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x17299c: 0x84a20120  lh          $v0, 0x120($a1)
    ctx->pc = 0x17299cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x1729a0: 0xa4820120  sh          $v0, 0x120($a0)
    ctx->pc = 0x1729a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x1729a4: 0x8ca20124  lw          $v0, 0x124($a1)
    ctx->pc = 0x1729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x1729a8: 0xac820124  sw          $v0, 0x124($a0)
    ctx->pc = 0x1729a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
    // 0x1729ac: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x1729acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
    // 0x1729b0: 0xac820128  sw          $v0, 0x128($a0)
    ctx->pc = 0x1729b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 2));
    // 0x1729b4: 0x8ca2012c  lw          $v0, 0x12C($a1)
    ctx->pc = 0x1729b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
    // 0x1729b8: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x1729b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x1729bc: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x1729c0: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x1729c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    // 0x1729c4: 0x8ca20134  lw          $v0, 0x134($a1)
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x1729c8: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x1729c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
    // 0x1729cc: 0xc4a10138  lwc1        $f1, 0x138($a1)
    ctx->pc = 0x1729ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729d0: 0xc4a0013c  lwc1        $f0, 0x13C($a1)
    ctx->pc = 0x1729d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1729d4: 0xe4810138  swc1        $f1, 0x138($a0)
    ctx->pc = 0x1729d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x1729d8: 0xe480013c  swc1        $f0, 0x13C($a0)
    ctx->pc = 0x1729d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 316), bits); }
label_1729dc:
    // 0x1729dc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1729dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1729e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1729e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1729e4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1729e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1729e8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1729e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1729ec: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1729ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1729f0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1729f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1729f4: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1729F4u;
    {
        const bool branch_taken_0x1729f4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1729F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1729F4u;
            // 0x1729f8: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729f4) {
            ctx->pc = 0x1729DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1729dc;
        }
    }
    ctx->pc = 0x1729FCu;
    // 0x1729fc: 0x8ca202c0  lw          $v0, 0x2C0($a1)
    ctx->pc = 0x1729fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 704)));
    // 0x172a00: 0x24a802e8  addiu       $t0, $a1, 0x2E8
    ctx->pc = 0x172a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 744));
    // 0x172a04: 0x248702e8  addiu       $a3, $a0, 0x2E8
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    // 0x172a08: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x172a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x172a0c: 0xac8202c0  sw          $v0, 0x2C0($a0)
    ctx->pc = 0x172a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 2));
    // 0x172a10: 0xc4a302c4  lwc1        $f3, 0x2C4($a1)
    ctx->pc = 0x172a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172a14: 0xc4a202c8  lwc1        $f2, 0x2C8($a1)
    ctx->pc = 0x172a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172a18: 0xc4a102cc  lwc1        $f1, 0x2CC($a1)
    ctx->pc = 0x172a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a1c: 0xc4a002d0  lwc1        $f0, 0x2D0($a1)
    ctx->pc = 0x172a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a20: 0xe48302c4  swc1        $f3, 0x2C4($a0)
    ctx->pc = 0x172a20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
    // 0x172a24: 0xe48202c8  swc1        $f2, 0x2C8($a0)
    ctx->pc = 0x172a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 712), bits); }
    // 0x172a28: 0xe48102cc  swc1        $f1, 0x2CC($a0)
    ctx->pc = 0x172a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 716), bits); }
    // 0x172a2c: 0xe48002d0  swc1        $f0, 0x2D0($a0)
    ctx->pc = 0x172a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x172a30: 0xc4a102d4  lwc1        $f1, 0x2D4($a1)
    ctx->pc = 0x172a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a34: 0xc4a002d8  lwc1        $f0, 0x2D8($a1)
    ctx->pc = 0x172a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a38: 0xe48102d4  swc1        $f1, 0x2D4($a0)
    ctx->pc = 0x172a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x172a3c: 0xe48002d8  swc1        $f0, 0x2D8($a0)
    ctx->pc = 0x172a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x172a40: 0x8ca202dc  lw          $v0, 0x2DC($a1)
    ctx->pc = 0x172a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 732)));
    // 0x172a44: 0xac8202dc  sw          $v0, 0x2DC($a0)
    ctx->pc = 0x172a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 2));
    // 0x172a48: 0x8ca202e0  lw          $v0, 0x2E0($a1)
    ctx->pc = 0x172a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 736)));
    // 0x172a4c: 0xac8202e0  sw          $v0, 0x2E0($a0)
    ctx->pc = 0x172a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 2));
    // 0x172a50: 0x8ca202e4  lw          $v0, 0x2E4($a1)
    ctx->pc = 0x172a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 740)));
    // 0x172a54: 0xac8202e4  sw          $v0, 0x2E4($a0)
    ctx->pc = 0x172a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
label_172a58:
    // 0x172a58: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x172a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172a5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x172a60: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x172a64: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x172a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x172a68: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x172a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x172a6c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x172a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x172a70: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172A70u;
    {
        const bool branch_taken_0x172a70 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x172A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A70u;
            // 0x172a74: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a70) {
            ctx->pc = 0x172A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172a58;
        }
    }
    ctx->pc = 0x172A78u;
    // 0x172a78: 0x8ca20348  lw          $v0, 0x348($a1)
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x172a7c: 0x24a803c0  addiu       $t0, $a1, 0x3C0
    ctx->pc = 0x172a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x172a80: 0x248703c0  addiu       $a3, $a0, 0x3C0
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    // 0x172a84: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x172a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x172a88: 0xac820348  sw          $v0, 0x348($a0)
    ctx->pc = 0x172a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 840), GPR_U32(ctx, 2));
    // 0x172a8c: 0x8ca2034c  lw          $v0, 0x34C($a1)
    ctx->pc = 0x172a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 844)));
    // 0x172a90: 0xac82034c  sw          $v0, 0x34C($a0)
    ctx->pc = 0x172a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 844), GPR_U32(ctx, 2));
    // 0x172a94: 0x8ca20350  lw          $v0, 0x350($a1)
    ctx->pc = 0x172a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 848)));
    // 0x172a98: 0xac820350  sw          $v0, 0x350($a0)
    ctx->pc = 0x172a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 848), GPR_U32(ctx, 2));
    // 0x172a9c: 0x8ca20354  lw          $v0, 0x354($a1)
    ctx->pc = 0x172a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x172aa0: 0xac820354  sw          $v0, 0x354($a0)
    ctx->pc = 0x172aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 852), GPR_U32(ctx, 2));
    // 0x172aa4: 0x8ca20358  lw          $v0, 0x358($a1)
    ctx->pc = 0x172aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 856)));
    // 0x172aa8: 0xac820358  sw          $v0, 0x358($a0)
    ctx->pc = 0x172aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 2));
    // 0x172aac: 0xc4a2035c  lwc1        $f2, 0x35C($a1)
    ctx->pc = 0x172aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172ab0: 0xc4a10360  lwc1        $f1, 0x360($a1)
    ctx->pc = 0x172ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ab4: 0xc4a00364  lwc1        $f0, 0x364($a1)
    ctx->pc = 0x172ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ab8: 0xe482035c  swc1        $f2, 0x35C($a0)
    ctx->pc = 0x172ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 860), bits); }
    // 0x172abc: 0xe4810360  swc1        $f1, 0x360($a0)
    ctx->pc = 0x172abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 864), bits); }
    // 0x172ac0: 0xe4800364  swc1        $f0, 0x364($a0)
    ctx->pc = 0x172ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 868), bits); }
    // 0x172ac4: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x172ac8: 0xac820368  sw          $v0, 0x368($a0)
    ctx->pc = 0x172ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 2));
    // 0x172acc: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x172ad0: 0xac82036c  sw          $v0, 0x36C($a0)
    ctx->pc = 0x172ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 876), GPR_U32(ctx, 2));
    // 0x172ad4: 0x8ca20370  lw          $v0, 0x370($a1)
    ctx->pc = 0x172ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x172ad8: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x172ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x172adc: 0x8ca20374  lw          $v0, 0x374($a1)
    ctx->pc = 0x172adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 884)));
    // 0x172ae0: 0xac820374  sw          $v0, 0x374($a0)
    ctx->pc = 0x172ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 2));
    // 0x172ae4: 0x8ca20378  lw          $v0, 0x378($a1)
    ctx->pc = 0x172ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 888)));
    // 0x172ae8: 0xac820378  sw          $v0, 0x378($a0)
    ctx->pc = 0x172ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 2));
    // 0x172aec: 0x8ca2037c  lw          $v0, 0x37C($a1)
    ctx->pc = 0x172aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 892)));
    // 0x172af0: 0xac82037c  sw          $v0, 0x37C($a0)
    ctx->pc = 0x172af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 892), GPR_U32(ctx, 2));
    // 0x172af4: 0x8ca20380  lw          $v0, 0x380($a1)
    ctx->pc = 0x172af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x172af8: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x172af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x172afc: 0x8ca20384  lw          $v0, 0x384($a1)
    ctx->pc = 0x172afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 900)));
    // 0x172b00: 0xac820384  sw          $v0, 0x384($a0)
    ctx->pc = 0x172b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 900), GPR_U32(ctx, 2));
    // 0x172b04: 0xc4a00388  lwc1        $f0, 0x388($a1)
    ctx->pc = 0x172b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b08: 0xe4800388  swc1        $f0, 0x388($a0)
    ctx->pc = 0x172b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
    // 0x172b0c: 0xc4a0038c  lwc1        $f0, 0x38C($a1)
    ctx->pc = 0x172b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b10: 0xe480038c  swc1        $f0, 0x38C($a0)
    ctx->pc = 0x172b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 908), bits); }
    // 0x172b14: 0xc4a00390  lwc1        $f0, 0x390($a1)
    ctx->pc = 0x172b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b18: 0xe4800390  swc1        $f0, 0x390($a0)
    ctx->pc = 0x172b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 912), bits); }
    // 0x172b1c: 0x8ca20394  lw          $v0, 0x394($a1)
    ctx->pc = 0x172b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x172b20: 0xac820394  sw          $v0, 0x394($a0)
    ctx->pc = 0x172b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 2));
    // 0x172b24: 0x8ca20398  lw          $v0, 0x398($a1)
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 920)));
    // 0x172b28: 0xac820398  sw          $v0, 0x398($a0)
    ctx->pc = 0x172b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 2));
    // 0x172b2c: 0x8ca2039c  lw          $v0, 0x39C($a1)
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 924)));
    // 0x172b30: 0xac82039c  sw          $v0, 0x39C($a0)
    ctx->pc = 0x172b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 924), GPR_U32(ctx, 2));
    // 0x172b34: 0xc4a003a0  lwc1        $f0, 0x3A0($a1)
    ctx->pc = 0x172b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b38: 0xe48003a0  swc1        $f0, 0x3A0($a0)
    ctx->pc = 0x172b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x172b3c: 0x8ca203a4  lw          $v0, 0x3A4($a1)
    ctx->pc = 0x172b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x172b40: 0xac8203a4  sw          $v0, 0x3A4($a0)
    ctx->pc = 0x172b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 2));
    // 0x172b44: 0x8ca203a8  lw          $v0, 0x3A8($a1)
    ctx->pc = 0x172b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 936)));
    // 0x172b48: 0xac8203a8  sw          $v0, 0x3A8($a0)
    ctx->pc = 0x172b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 2));
    // 0x172b4c: 0x8ca203ac  lw          $v0, 0x3AC($a1)
    ctx->pc = 0x172b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x172b50: 0xac8203ac  sw          $v0, 0x3AC($a0)
    ctx->pc = 0x172b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 2));
    // 0x172b54: 0x8ca203b0  lw          $v0, 0x3B0($a1)
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 944)));
    // 0x172b58: 0xac8203b0  sw          $v0, 0x3B0($a0)
    ctx->pc = 0x172b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 2));
    // 0x172b5c: 0x8ca203b4  lw          $v0, 0x3B4($a1)
    ctx->pc = 0x172b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 948)));
    // 0x172b60: 0xac8203b4  sw          $v0, 0x3B4($a0)
    ctx->pc = 0x172b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 2));
    // 0x172b64: 0x8ca203b8  lw          $v0, 0x3B8($a1)
    ctx->pc = 0x172b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 952)));
    // 0x172b68: 0xac8203b8  sw          $v0, 0x3B8($a0)
    ctx->pc = 0x172b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 952), GPR_U32(ctx, 2));
    // 0x172b6c: 0x8ca203bc  lw          $v0, 0x3BC($a1)
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 956)));
    // 0x172b70: 0xac8203bc  sw          $v0, 0x3BC($a0)
    ctx->pc = 0x172b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 956), GPR_U32(ctx, 2));
label_172b74:
    // 0x172b74: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x172b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172b78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x172b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x172b7c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x172b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x172b80: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x172b80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x172b84: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x172b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x172b88: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x172b88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x172b8c: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172B8Cu;
    {
        const bool branch_taken_0x172b8c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x172B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B8Cu;
            // 0x172b90: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b8c) {
            ctx->pc = 0x172B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172b74;
        }
    }
    ctx->pc = 0x172B94u;
    // 0x172b94: 0x24a80460  addiu       $t0, $a1, 0x460
    ctx->pc = 0x172b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
    // 0x172b98: 0x24870460  addiu       $a3, $a0, 0x460
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    // 0x172b9c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x172b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_172ba0:
    // 0x172ba0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172ba4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x172ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x172ba8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x172ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x172bac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x172bacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x172bb0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x172bb4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x172bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x172bb8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172BB8u;
    {
        const bool branch_taken_0x172bb8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x172BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BB8u;
            // 0x172bbc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bb8) {
            ctx->pc = 0x172BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172ba0;
        }
    }
    ctx->pc = 0x172BC0u;
    // 0x172bc0: 0x8ca20500  lw          $v0, 0x500($a1)
    ctx->pc = 0x172bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x172bc4: 0x24a805ec  addiu       $t0, $a1, 0x5EC
    ctx->pc = 0x172bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1516));
    // 0x172bc8: 0x248705ec  addiu       $a3, $a0, 0x5EC
    ctx->pc = 0x172bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1516));
    // 0x172bcc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x172bd0: 0xac820500  sw          $v0, 0x500($a0)
    ctx->pc = 0x172bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1280), GPR_U32(ctx, 2));
    // 0x172bd4: 0x8ca20504  lw          $v0, 0x504($a1)
    ctx->pc = 0x172bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1284)));
    // 0x172bd8: 0xac820504  sw          $v0, 0x504($a0)
    ctx->pc = 0x172bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1284), GPR_U32(ctx, 2));
    // 0x172bdc: 0xc4a00508  lwc1        $f0, 0x508($a1)
    ctx->pc = 0x172bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172be0: 0xe4800508  swc1        $f0, 0x508($a0)
    ctx->pc = 0x172be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1288), bits); }
    // 0x172be4: 0xc4a0050c  lwc1        $f0, 0x50C($a1)
    ctx->pc = 0x172be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172be8: 0xe480050c  swc1        $f0, 0x50C($a0)
    ctx->pc = 0x172be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1292), bits); }
    // 0x172bec: 0xc4a30510  lwc1        $f3, 0x510($a1)
    ctx->pc = 0x172becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172bf0: 0xc4a20514  lwc1        $f2, 0x514($a1)
    ctx->pc = 0x172bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172bf4: 0xc4a10518  lwc1        $f1, 0x518($a1)
    ctx->pc = 0x172bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172bf8: 0xc4a0051c  lwc1        $f0, 0x51C($a1)
    ctx->pc = 0x172bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172bfc: 0xe4830510  swc1        $f3, 0x510($a0)
    ctx->pc = 0x172bfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1296), bits); }
    // 0x172c00: 0xe4820514  swc1        $f2, 0x514($a0)
    ctx->pc = 0x172c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1300), bits); }
    // 0x172c04: 0xe4810518  swc1        $f1, 0x518($a0)
    ctx->pc = 0x172c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1304), bits); }
    // 0x172c08: 0xe480051c  swc1        $f0, 0x51C($a0)
    ctx->pc = 0x172c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1308), bits); }
    // 0x172c0c: 0xc4a30520  lwc1        $f3, 0x520($a1)
    ctx->pc = 0x172c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172c10: 0xc4a20524  lwc1        $f2, 0x524($a1)
    ctx->pc = 0x172c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172c14: 0xc4a10528  lwc1        $f1, 0x528($a1)
    ctx->pc = 0x172c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c18: 0xc4a0052c  lwc1        $f0, 0x52C($a1)
    ctx->pc = 0x172c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c1c: 0xe4830520  swc1        $f3, 0x520($a0)
    ctx->pc = 0x172c1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1312), bits); }
    // 0x172c20: 0xe4820524  swc1        $f2, 0x524($a0)
    ctx->pc = 0x172c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1316), bits); }
    // 0x172c24: 0xe4810528  swc1        $f1, 0x528($a0)
    ctx->pc = 0x172c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1320), bits); }
    // 0x172c28: 0xe480052c  swc1        $f0, 0x52C($a0)
    ctx->pc = 0x172c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1324), bits); }
    // 0x172c2c: 0xc4a30530  lwc1        $f3, 0x530($a1)
    ctx->pc = 0x172c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172c30: 0xc4a20534  lwc1        $f2, 0x534($a1)
    ctx->pc = 0x172c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172c34: 0xc4a10538  lwc1        $f1, 0x538($a1)
    ctx->pc = 0x172c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c38: 0xc4a0053c  lwc1        $f0, 0x53C($a1)
    ctx->pc = 0x172c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c3c: 0xe4830530  swc1        $f3, 0x530($a0)
    ctx->pc = 0x172c3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1328), bits); }
    // 0x172c40: 0xe4820534  swc1        $f2, 0x534($a0)
    ctx->pc = 0x172c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1332), bits); }
    // 0x172c44: 0xe4810538  swc1        $f1, 0x538($a0)
    ctx->pc = 0x172c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1336), bits); }
    // 0x172c48: 0xe480053c  swc1        $f0, 0x53C($a0)
    ctx->pc = 0x172c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1340), bits); }
    // 0x172c4c: 0xc4a30540  lwc1        $f3, 0x540($a1)
    ctx->pc = 0x172c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172c50: 0xc4a20544  lwc1        $f2, 0x544($a1)
    ctx->pc = 0x172c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172c54: 0xc4a10548  lwc1        $f1, 0x548($a1)
    ctx->pc = 0x172c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c58: 0xc4a0054c  lwc1        $f0, 0x54C($a1)
    ctx->pc = 0x172c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c5c: 0xe4830540  swc1        $f3, 0x540($a0)
    ctx->pc = 0x172c5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1344), bits); }
    // 0x172c60: 0xe4820544  swc1        $f2, 0x544($a0)
    ctx->pc = 0x172c60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1348), bits); }
    // 0x172c64: 0xe4810548  swc1        $f1, 0x548($a0)
    ctx->pc = 0x172c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1352), bits); }
    // 0x172c68: 0xe480054c  swc1        $f0, 0x54C($a0)
    ctx->pc = 0x172c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1356), bits); }
    // 0x172c6c: 0xc4a30550  lwc1        $f3, 0x550($a1)
    ctx->pc = 0x172c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172c70: 0xc4a20554  lwc1        $f2, 0x554($a1)
    ctx->pc = 0x172c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172c74: 0xc4a10558  lwc1        $f1, 0x558($a1)
    ctx->pc = 0x172c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c78: 0xc4a0055c  lwc1        $f0, 0x55C($a1)
    ctx->pc = 0x172c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c7c: 0xe4830550  swc1        $f3, 0x550($a0)
    ctx->pc = 0x172c7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1360), bits); }
    // 0x172c80: 0xe4820554  swc1        $f2, 0x554($a0)
    ctx->pc = 0x172c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1364), bits); }
    // 0x172c84: 0xe4810558  swc1        $f1, 0x558($a0)
    ctx->pc = 0x172c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1368), bits); }
    // 0x172c88: 0xe480055c  swc1        $f0, 0x55C($a0)
    ctx->pc = 0x172c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1372), bits); }
    // 0x172c8c: 0xc4a30560  lwc1        $f3, 0x560($a1)
    ctx->pc = 0x172c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172c90: 0xc4a20564  lwc1        $f2, 0x564($a1)
    ctx->pc = 0x172c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172c94: 0xc4a10568  lwc1        $f1, 0x568($a1)
    ctx->pc = 0x172c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c98: 0xc4a0056c  lwc1        $f0, 0x56C($a1)
    ctx->pc = 0x172c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c9c: 0xe4830560  swc1        $f3, 0x560($a0)
    ctx->pc = 0x172c9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
    // 0x172ca0: 0xe4820564  swc1        $f2, 0x564($a0)
    ctx->pc = 0x172ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1380), bits); }
    // 0x172ca4: 0xe4810568  swc1        $f1, 0x568($a0)
    ctx->pc = 0x172ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1384), bits); }
    // 0x172ca8: 0xe480056c  swc1        $f0, 0x56C($a0)
    ctx->pc = 0x172ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1388), bits); }
    // 0x172cac: 0xc4a20570  lwc1        $f2, 0x570($a1)
    ctx->pc = 0x172cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172cb0: 0xc4a10574  lwc1        $f1, 0x574($a1)
    ctx->pc = 0x172cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172cb4: 0xc4a00578  lwc1        $f0, 0x578($a1)
    ctx->pc = 0x172cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172cb8: 0xe4820570  swc1        $f2, 0x570($a0)
    ctx->pc = 0x172cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1392), bits); }
    // 0x172cbc: 0xe4810574  swc1        $f1, 0x574($a0)
    ctx->pc = 0x172cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1396), bits); }
    // 0x172cc0: 0xe4800578  swc1        $f0, 0x578($a0)
    ctx->pc = 0x172cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1400), bits); }
    // 0x172cc4: 0xc4a3057c  lwc1        $f3, 0x57C($a1)
    ctx->pc = 0x172cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172cc8: 0xc4a20580  lwc1        $f2, 0x580($a1)
    ctx->pc = 0x172cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172ccc: 0xc4a10584  lwc1        $f1, 0x584($a1)
    ctx->pc = 0x172cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172cd0: 0xc4a00588  lwc1        $f0, 0x588($a1)
    ctx->pc = 0x172cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172cd4: 0xe483057c  swc1        $f3, 0x57C($a0)
    ctx->pc = 0x172cd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1404), bits); }
    // 0x172cd8: 0xe4820580  swc1        $f2, 0x580($a0)
    ctx->pc = 0x172cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1408), bits); }
    // 0x172cdc: 0xe4810584  swc1        $f1, 0x584($a0)
    ctx->pc = 0x172cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1412), bits); }
    // 0x172ce0: 0xe4800588  swc1        $f0, 0x588($a0)
    ctx->pc = 0x172ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1416), bits); }
    // 0x172ce4: 0xc4a3058c  lwc1        $f3, 0x58C($a1)
    ctx->pc = 0x172ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172ce8: 0xc4a20590  lwc1        $f2, 0x590($a1)
    ctx->pc = 0x172ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172cec: 0xc4a10594  lwc1        $f1, 0x594($a1)
    ctx->pc = 0x172cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172cf0: 0xc4a00598  lwc1        $f0, 0x598($a1)
    ctx->pc = 0x172cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172cf4: 0xe483058c  swc1        $f3, 0x58C($a0)
    ctx->pc = 0x172cf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1420), bits); }
    // 0x172cf8: 0xe4820590  swc1        $f2, 0x590($a0)
    ctx->pc = 0x172cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1424), bits); }
    // 0x172cfc: 0xe4810594  swc1        $f1, 0x594($a0)
    ctx->pc = 0x172cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1428), bits); }
    // 0x172d00: 0xe4800598  swc1        $f0, 0x598($a0)
    ctx->pc = 0x172d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1432), bits); }
    // 0x172d04: 0xc4a1059c  lwc1        $f1, 0x59C($a1)
    ctx->pc = 0x172d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d08: 0xc4a005a0  lwc1        $f0, 0x5A0($a1)
    ctx->pc = 0x172d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d0c: 0xe481059c  swc1        $f1, 0x59C($a0)
    ctx->pc = 0x172d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1436), bits); }
    // 0x172d10: 0xe48005a0  swc1        $f0, 0x5A0($a0)
    ctx->pc = 0x172d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1440), bits); }
    // 0x172d14: 0xc4a305a4  lwc1        $f3, 0x5A4($a1)
    ctx->pc = 0x172d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172d18: 0xc4a205a8  lwc1        $f2, 0x5A8($a1)
    ctx->pc = 0x172d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172d1c: 0xc4a105ac  lwc1        $f1, 0x5AC($a1)
    ctx->pc = 0x172d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d20: 0xc4a005b0  lwc1        $f0, 0x5B0($a1)
    ctx->pc = 0x172d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d24: 0xe48305a4  swc1        $f3, 0x5A4($a0)
    ctx->pc = 0x172d24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1444), bits); }
    // 0x172d28: 0xe48205a8  swc1        $f2, 0x5A8($a0)
    ctx->pc = 0x172d28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1448), bits); }
    // 0x172d2c: 0xe48105ac  swc1        $f1, 0x5AC($a0)
    ctx->pc = 0x172d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1452), bits); }
    // 0x172d30: 0xe48005b0  swc1        $f0, 0x5B0($a0)
    ctx->pc = 0x172d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1456), bits); }
    // 0x172d34: 0xc4a305b4  lwc1        $f3, 0x5B4($a1)
    ctx->pc = 0x172d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172d38: 0xc4a205b8  lwc1        $f2, 0x5B8($a1)
    ctx->pc = 0x172d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172d3c: 0xc4a105bc  lwc1        $f1, 0x5BC($a1)
    ctx->pc = 0x172d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d40: 0xc4a005c0  lwc1        $f0, 0x5C0($a1)
    ctx->pc = 0x172d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d44: 0xe48305b4  swc1        $f3, 0x5B4($a0)
    ctx->pc = 0x172d44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1460), bits); }
    // 0x172d48: 0xe48205b8  swc1        $f2, 0x5B8($a0)
    ctx->pc = 0x172d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1464), bits); }
    // 0x172d4c: 0xe48105bc  swc1        $f1, 0x5BC($a0)
    ctx->pc = 0x172d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1468), bits); }
    // 0x172d50: 0xe48005c0  swc1        $f0, 0x5C0($a0)
    ctx->pc = 0x172d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1472), bits); }
    // 0x172d54: 0xc4a305c4  lwc1        $f3, 0x5C4($a1)
    ctx->pc = 0x172d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172d58: 0xc4a205c8  lwc1        $f2, 0x5C8($a1)
    ctx->pc = 0x172d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172d5c: 0xc4a105cc  lwc1        $f1, 0x5CC($a1)
    ctx->pc = 0x172d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d60: 0xc4a005d0  lwc1        $f0, 0x5D0($a1)
    ctx->pc = 0x172d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d64: 0xe48305c4  swc1        $f3, 0x5C4($a0)
    ctx->pc = 0x172d64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1476), bits); }
    // 0x172d68: 0xe48205c8  swc1        $f2, 0x5C8($a0)
    ctx->pc = 0x172d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1480), bits); }
    // 0x172d6c: 0xe48105cc  swc1        $f1, 0x5CC($a0)
    ctx->pc = 0x172d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1484), bits); }
    // 0x172d70: 0xe48005d0  swc1        $f0, 0x5D0($a0)
    ctx->pc = 0x172d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1488), bits); }
    // 0x172d74: 0xc4a305d4  lwc1        $f3, 0x5D4($a1)
    ctx->pc = 0x172d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172d78: 0xc4a205d8  lwc1        $f2, 0x5D8($a1)
    ctx->pc = 0x172d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172d7c: 0xc4a105dc  lwc1        $f1, 0x5DC($a1)
    ctx->pc = 0x172d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d80: 0xc4a005e0  lwc1        $f0, 0x5E0($a1)
    ctx->pc = 0x172d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d84: 0xe48305d4  swc1        $f3, 0x5D4($a0)
    ctx->pc = 0x172d84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1492), bits); }
    // 0x172d88: 0xe48205d8  swc1        $f2, 0x5D8($a0)
    ctx->pc = 0x172d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1496), bits); }
    // 0x172d8c: 0xe48105dc  swc1        $f1, 0x5DC($a0)
    ctx->pc = 0x172d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1500), bits); }
    // 0x172d90: 0xe48005e0  swc1        $f0, 0x5E0($a0)
    ctx->pc = 0x172d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1504), bits); }
    // 0x172d94: 0x8ca205e4  lw          $v0, 0x5E4($a1)
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1508)));
    // 0x172d98: 0xac8205e4  sw          $v0, 0x5E4($a0)
    ctx->pc = 0x172d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1508), GPR_U32(ctx, 2));
    // 0x172d9c: 0x8ca205e8  lw          $v0, 0x5E8($a1)
    ctx->pc = 0x172d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1512)));
    // 0x172da0: 0xac8205e8  sw          $v0, 0x5E8($a0)
    ctx->pc = 0x172da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1512), GPR_U32(ctx, 2));
label_172da4:
    // 0x172da4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x172da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172da8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x172dac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x172dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x172db0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x172db0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x172db4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x172db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x172db8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x172db8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x172dbc: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172DBCu;
    {
        const bool branch_taken_0x172dbc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x172DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172DBCu;
            // 0x172dc0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172dbc) {
            ctx->pc = 0x172DA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172da4;
        }
    }
    ctx->pc = 0x172DC4u;
    // 0x172dc4: 0x8ca3064c  lw          $v1, 0x64C($a1)
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1612)));
    // 0x172dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x172dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dcc: 0xac83064c  sw          $v1, 0x64C($a0)
    ctx->pc = 0x172dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1612), GPR_U32(ctx, 3));
    // 0x172dd0: 0x8ca30650  lw          $v1, 0x650($a1)
    ctx->pc = 0x172dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1616)));
    // 0x172dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x172DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172DD4u;
            // 0x172dd8: 0xac830650  sw          $v1, 0x650($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172DDCu;
}
