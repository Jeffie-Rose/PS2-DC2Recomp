#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetParam__6CWaterFffff
// Address: 0x184c60 - 0x184c74
void SetParam__6CWaterFffff_0x184c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetParam__6CWaterFffff_0x184c60");
#endif

    ctx->pc = 0x184c60u;

    // 0x184c60: 0xe48c0040  swc1        $f12, 0x40($a0)
    ctx->pc = 0x184c60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x184c64: 0xe48d0044  swc1        $f13, 0x44($a0)
    ctx->pc = 0x184c64u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x184c68: 0xe48e0048  swc1        $f14, 0x48($a0)
    ctx->pc = 0x184c68u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x184c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x184C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C6Cu;
            // 0x184c70: 0xe48f004c  swc1        $f15, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184C74u;
}
