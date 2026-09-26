#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetFrameBuffer__FP10mgCTexture
// Address: 0x144300 - 0x1443f8
void mgGetFrameBuffer__FP10mgCTexture_0x144300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetFrameBuffer__FP10mgCTexture_0x144300");
#endif

    switch (ctx->pc) {
        case 0x144340u: goto label_144340;
        default: break;
    }

    ctx->pc = 0x144300u;

    // 0x144300: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144304: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x144304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x144308: 0x84232490  lh          $v1, 0x2490($at)
    ctx->pc = 0x144308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9360)));
    // 0x14430c: 0x25082498  addiu       $t0, $t0, 0x2498
    ctx->pc = 0x14430cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9368));
    // 0x144310: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x144310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x144314: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x144314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x144318: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x144318u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x14431c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144320: 0x84232492  lh          $v1, 0x2492($at)
    ctx->pc = 0x144320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9362)));
    // 0x144324: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x144324u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x144328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14432c: 0x84232494  lh          $v1, 0x2494($at)
    ctx->pc = 0x14432cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9364)));
    // 0x144330: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x144330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x144334: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144338: 0x84232496  lh          $v1, 0x2496($at)
    ctx->pc = 0x144338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9366)));
    // 0x14433c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x14433cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_144340:
    // 0x144340: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x144340u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x144344: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x144344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144348: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x144348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x14434c: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x14434cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x144350: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x144350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x144354: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x144354u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x144358: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144358u;
    {
        const bool branch_taken_0x144358 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x14435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144358u;
            // 0x14435c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144358) {
            ctx->pc = 0x144340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144340;
        }
    }
    ctx->pc = 0x144360u;
    // 0x144360: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144364: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x144364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x144368: 0x8c2524b8  lw          $a1, 0x24B8($at)
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9400)));
    // 0x14436c: 0x246324e0  addiu       $v1, $v1, 0x24E0
    ctx->pc = 0x14436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9440));
    // 0x144370: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x144370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x144374: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144378: 0x8c2524bc  lw          $a1, 0x24BC($at)
    ctx->pc = 0x144378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9404)));
    // 0x14437c: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x14437cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x144380: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144384: 0x8c2524c0  lw          $a1, 0x24C0($at)
    ctx->pc = 0x144384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9408)));
    // 0x144388: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x144388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x14438c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14438cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144390: 0xdc2524c8  ld          $a1, 0x24C8($at)
    ctx->pc = 0x144390u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9416)));
    // 0x144394: 0xfc850038  sd          $a1, 0x38($a0)
    ctx->pc = 0x144394u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 5));
    // 0x144398: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14439c: 0xdc2524d0  ld          $a1, 0x24D0($at)
    ctx->pc = 0x14439cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9424)));
    // 0x1443a0: 0xfc850040  sd          $a1, 0x40($a0)
    ctx->pc = 0x1443a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 5));
    // 0x1443a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1443a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1443a8: 0xdc2524d8  ld          $a1, 0x24D8($at)
    ctx->pc = 0x1443a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9432)));
    // 0x1443ac: 0xfc850048  sd          $a1, 0x48($a0)
    ctx->pc = 0x1443acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 5));
    // 0x1443b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1443b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1443b4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1443b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1443b8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1443b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1443bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1443bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1443c0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1443c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1443c4: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x1443c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1443c8: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x1443c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1443cc: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x1443ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1443d0: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x1443d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x1443d4: 0x8c2324f0  lw          $v1, 0x24F0($at)
    ctx->pc = 0x1443d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9456)));
    // 0x1443d8: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x1443d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x1443dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1443e0: 0x8c2324f4  lw          $v1, 0x24F4($at)
    ctx->pc = 0x1443e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9460)));
    // 0x1443e4: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x1443e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x1443e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1443e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1443ec: 0x8c2324f8  lw          $v1, 0x24F8($at)
    ctx->pc = 0x1443ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9464)));
    // 0x1443f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1443F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1443F0u;
            // 0x1443f4: 0xac830068  sw          $v1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1443F8u;
}
