#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRectFontTexMini__FiPi
// Address: 0x2d4300 - 0x2d432c
void GetRectFontTexMini__FiPi_0x2d4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRectFontTexMini__FiPi_0x2d4300");
#endif

    ctx->pc = 0x2d4300u;

    // 0x2d4300: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d4300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d4304: 0x24636890  addiu       $v1, $v1, 0x6890
    ctx->pc = 0x2d4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26768));
    // 0x2d4308: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2d4308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d430c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2d430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4310: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2d4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4314: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2d4314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4318: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2d4318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d431c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2d431cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d4320: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2d4320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d4324: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4324u;
            // 0x2d4328: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D432Cu;
}
