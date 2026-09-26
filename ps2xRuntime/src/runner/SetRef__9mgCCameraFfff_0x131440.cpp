#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRef__9mgCCameraFfff
// Address: 0x131440 - 0x13145c
void SetRef__9mgCCameraFfff_0x131440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRef__9mgCCameraFfff_0x131440");
#endif

    ctx->pc = 0x131440u;

    // 0x131440: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x131440u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x131444: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x131444u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x131448: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x131448u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13144c: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x13144cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x131450: 0xe48e0018  swc1        $f14, 0x18($a0)
    ctx->pc = 0x131450u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x131454: 0x3e00008  jr          $ra
    ctx->pc = 0x131454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131454u;
            // 0x131458: 0xe48e0038  swc1        $f14, 0x38($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13145Cu;
}
