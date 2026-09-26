#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScale__13CEventSprite2Fff
// Address: 0x290bd0 - 0x290bdc
void SetScale__13CEventSprite2Fff_0x290bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScale__13CEventSprite2Fff_0x290bd0");
#endif

    ctx->pc = 0x290bd0u;

    // 0x290bd0: 0xe48c006c  swc1        $f12, 0x6C($a0)
    ctx->pc = 0x290bd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x290bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x290BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290BD4u;
            // 0x290bd8: 0xe48d0070  swc1        $f13, 0x70($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290BDCu;
}
