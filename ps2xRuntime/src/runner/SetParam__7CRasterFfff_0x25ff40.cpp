#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetParam__7CRasterFfff
// Address: 0x25ff40 - 0x25ff50
void SetParam__7CRasterFfff_0x25ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetParam__7CRasterFfff_0x25ff40");
#endif

    ctx->pc = 0x25ff40u;

    // 0x25ff40: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x25ff40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25ff44: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x25ff44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x25ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FF48u;
            // 0x25ff4c: 0xe48e0014  swc1        $f14, 0x14($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FF50u;
}
