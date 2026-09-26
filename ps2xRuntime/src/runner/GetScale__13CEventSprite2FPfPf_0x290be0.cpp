#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScale__13CEventSprite2FPfPf
// Address: 0x290be0 - 0x290bf4
void GetScale__13CEventSprite2FPfPf_0x290be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScale__13CEventSprite2FPfPf_0x290be0");
#endif

    ctx->pc = 0x290be0u;

    // 0x290be0: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x290be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290be4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x290be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x290be8: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x290be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290bec: 0x3e00008  jr          $ra
    ctx->pc = 0x290BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BECu;
            // 0x290bf0: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290BF4u;
}
