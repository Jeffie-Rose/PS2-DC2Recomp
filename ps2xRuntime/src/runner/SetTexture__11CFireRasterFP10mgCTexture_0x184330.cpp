#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexture__11CFireRasterFP10mgCTexture
// Address: 0x184330 - 0x184410
void SetTexture__11CFireRasterFP10mgCTexture_0x184330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexture__11CFireRasterFP10mgCTexture_0x184330");
#endif

    switch (ctx->pc) {
        case 0x184364u: goto label_184364;
        default: break;
    }

    ctx->pc = 0x184330u;

    // 0x184330: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x184330u;
    {
        const bool branch_taken_0x184330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x184330) {
            ctx->pc = 0x184408u;
            goto label_184408;
        }
    }
    ctx->pc = 0x184338u;
    // 0x184338: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x184338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18433c: 0x24a90008  addiu       $t1, $a1, 0x8
    ctx->pc = 0x18433cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x184340: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x184340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x184344: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x184344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x184348: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x184348u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18434c: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x18434cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x184350: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x184350u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x184354: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x184354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x184358: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x184358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x18435c: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x18435cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x184360: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x184360u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_184364:
    // 0x184364: 0x81260000  lb          $a2, 0x0($t1)
    ctx->pc = 0x184364u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x184368: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x184368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18436c: 0x81230001  lb          $v1, 0x1($t1)
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x184370: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x184370u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x184374: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x184374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x184378: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x184378u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x18437c: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18437Cu;
    {
        const bool branch_taken_0x18437c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x184380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18437Cu;
            // 0x184380: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18437c) {
            ctx->pc = 0x184364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184364;
        }
    }
    ctx->pc = 0x184384u;
    // 0x184384: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x184384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x184388: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x184388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18438c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18438cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x184390: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x184390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x184394: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x184394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x184398: 0x8ca7002c  lw          $a3, 0x2C($a1)
    ctx->pc = 0x184398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x18439c: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x18439cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1843a0: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x1843a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1843a4: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1843a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1843a8: 0xdca70038  ld          $a3, 0x38($a1)
    ctx->pc = 0x1843a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1843ac: 0xfc870038  sd          $a3, 0x38($a0)
    ctx->pc = 0x1843acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 7));
    // 0x1843b0: 0xdca70040  ld          $a3, 0x40($a1)
    ctx->pc = 0x1843b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1843b4: 0xfc870040  sd          $a3, 0x40($a0)
    ctx->pc = 0x1843b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 7));
    // 0x1843b8: 0xdca70048  ld          $a3, 0x48($a1)
    ctx->pc = 0x1843b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1843bc: 0xfc870048  sd          $a3, 0x48($a0)
    ctx->pc = 0x1843bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 7));
    // 0x1843c0: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x1843c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1843c4: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x1843c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1843c8: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x1843c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1843cc: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x1843ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843d0: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x1843d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1843d4: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x1843d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1843d8: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x1843d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1843dc: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x1843dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x1843e0: 0x8ca70060  lw          $a3, 0x60($a1)
    ctx->pc = 0x1843e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1843e4: 0xac870060  sw          $a3, 0x60($a0)
    ctx->pc = 0x1843e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 7));
    // 0x1843e8: 0x8ca70064  lw          $a3, 0x64($a1)
    ctx->pc = 0x1843e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1843ec: 0xac870064  sw          $a3, 0x64($a0)
    ctx->pc = 0x1843ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 7));
    // 0x1843f0: 0x8ca50068  lw          $a1, 0x68($a1)
    ctx->pc = 0x1843f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1843f4: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x1843f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x1843f8: 0x9085003c  lbu         $a1, 0x3C($a0)
    ctx->pc = 0x1843f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1843fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1843fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x184400: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x184400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x184404: 0xa083003c  sb          $v1, 0x3C($a0)
    ctx->pc = 0x184404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 3));
label_184408:
    // 0x184408: 0x3e00008  jr          $ra
    ctx->pc = 0x184408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184410u;
}
