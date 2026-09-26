#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFixHeight__15CameraCtrlParamFf
// Address: 0x2ebe50 - 0x2ebe6c
void SetFixHeight__15CameraCtrlParamFf_0x2ebe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFixHeight__15CameraCtrlParamFf_0x2ebe50");
#endif

    ctx->pc = 0x2ebe50u;

    // 0x2ebe50: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2ebe50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2ebe54: 0xe48c0018  swc1        $f12, 0x18($a0)
    ctx->pc = 0x2ebe54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2ebe58: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x2ebe58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2ebe5c: 0xe48c000c  swc1        $f12, 0xC($a0)
    ctx->pc = 0x2ebe5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2ebe60: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x2ebe60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2ebe64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE64u;
            // 0x2ebe68: 0xe48c0020  swc1        $f12, 0x20($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBE6Cu;
}
