#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNextRef__9mgCCameraFfff
// Address: 0x131470 - 0x131480
void SetNextRef__9mgCCameraFfff_0x131470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextRef__9mgCCameraFfff_0x131470");
#endif

    ctx->pc = 0x131470u;

    // 0x131470: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x131470u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x131474: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x131474u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x131478: 0x3e00008  jr          $ra
    ctx->pc = 0x131478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131478u;
            // 0x13147c: 0xe48e0038  swc1        $f14, 0x38($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131480u;
}
