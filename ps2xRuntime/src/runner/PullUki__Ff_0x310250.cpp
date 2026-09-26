#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PullUki__Ff
// Address: 0x310250 - 0x310268
void PullUki__Ff_0x310250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PullUki__Ff_0x310250");
#endif

    ctx->pc = 0x310250u;

    // 0x310250: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x310254: 0xc420ec94  lwc1        $f0, -0x136C($at)
    ctx->pc = 0x310254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310258: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x310258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x31025c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31025cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x310260: 0x3e00008  jr          $ra
    ctx->pc = 0x310260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310260u;
            // 0x310264: 0xe420ec94  swc1        $f0, -0x136C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310268u;
}
