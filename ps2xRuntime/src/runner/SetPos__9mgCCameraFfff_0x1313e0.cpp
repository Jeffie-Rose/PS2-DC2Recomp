#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__9mgCCameraFfff
// Address: 0x1313e0 - 0x131408
void SetPos__9mgCCameraFfff_0x1313e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__9mgCCameraFfff_0x1313e0");
#endif

    ctx->pc = 0x1313e0u;

    // 0x1313e0: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x1313e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1313e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1313e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1313e8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1313e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1313ec: 0xe48d0024  swc1        $f13, 0x24($a0)
    ctx->pc = 0x1313ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1313f0: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1313f0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1313f4: 0xe48e0028  swc1        $f14, 0x28($a0)
    ctx->pc = 0x1313f4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1313f8: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x1313f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1313fc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1313fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x131400: 0x3e00008  jr          $ra
    ctx->pc = 0x131400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131400u;
            // 0x131404: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131408u;
}
