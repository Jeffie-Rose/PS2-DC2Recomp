#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetFogParam__FP11mgFOG_PARAM
// Address: 0x143970 - 0x143a0c
void mgGetFogParam__FP11mgFOG_PARAM_0x143970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetFogParam__FP11mgFOG_PARAM_0x143970");
#endif

    ctx->pc = 0x143970u;

    // 0x143970: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143974: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x143978: 0xc4201e90  lwc1        $f0, 0x1E90($at)
    ctx->pc = 0x143978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14397c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x14397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x143980: 0x24a51e98  addiu       $a1, $a1, 0x1E98
    ctx->pc = 0x143980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7832));
    // 0x143984: 0x24631eb0  addiu       $v1, $v1, 0x1EB0
    ctx->pc = 0x143984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7856));
    // 0x143988: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x143988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14398c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14398cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143990: 0xc4201e94  lwc1        $f0, 0x1E94($at)
    ctx->pc = 0x143990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143994: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x143994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x143998: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14399c: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x14399cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1439a0: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x1439a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1439a4: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1439a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1439a8: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x1439a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1439ac: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x1439acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x1439b0: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x1439b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x1439b4: 0xa086000a  sb          $a2, 0xA($a0)
    ctx->pc = 0x1439b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x1439b8: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x1439b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x1439bc: 0xc4201e9c  lwc1        $f0, 0x1E9C($at)
    ctx->pc = 0x1439bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439c0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1439c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1439c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1439c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1439c8: 0xc4201ea0  lwc1        $f0, 0x1EA0($at)
    ctx->pc = 0x1439c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439cc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1439ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1439d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1439d4: 0xc4201ea4  lwc1        $f0, 0x1EA4($at)
    ctx->pc = 0x1439d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439d8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1439d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1439dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1439dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1439e0: 0xc4201ea8  lwc1        $f0, 0x1EA8($at)
    ctx->pc = 0x1439e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439e4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1439e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1439e8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1439e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1439ec: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1439ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1439f0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1439f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1439f4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1439f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439f8: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x1439f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1439fc: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1439fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x143a00: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x143a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x143a04: 0x3e00008  jr          $ra
    ctx->pc = 0x143A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A04u;
            // 0x143a08: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143A0Cu;
}
