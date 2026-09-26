#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNextPos__9mgCCameraFfff
// Address: 0x131420 - 0x131430
void SetNextPos__9mgCCameraFfff_0x131420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextPos__9mgCCameraFfff_0x131420");
#endif

    ctx->pc = 0x131420u;

    // 0x131420: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x131420u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x131424: 0xe48d0024  swc1        $f13, 0x24($a0)
    ctx->pc = 0x131424u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x131428: 0x3e00008  jr          $ra
    ctx->pc = 0x131428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131428u;
            // 0x13142c: 0xe48e0028  swc1        $f14, 0x28($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131430u;
}
