#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFarDist__7CObjectFf
// Address: 0x160b80 - 0x160b88
void SetFarDist__7CObjectFf_0x160b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFarDist__7CObjectFf_0x160b80");
#endif

    ctx->pc = 0x160b80u;

    // 0x160b80: 0x3e00008  jr          $ra
    ctx->pc = 0x160B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B80u;
            // 0x160b84: 0xe48c0050  swc1        $f12, 0x50($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B88u;
}
