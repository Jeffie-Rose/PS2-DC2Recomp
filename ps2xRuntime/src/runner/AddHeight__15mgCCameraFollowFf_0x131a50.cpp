#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddHeight__15mgCCameraFollowFf
// Address: 0x131a50 - 0x131a60
void AddHeight__15mgCCameraFollowFf_0x131a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddHeight__15mgCCameraFollowFf_0x131a50");
#endif

    ctx->pc = 0x131a50u;

    // 0x131a50: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x131a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131a54: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x131a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x131a58: 0x3e00008  jr          $ra
    ctx->pc = 0x131A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A58u;
            // 0x131a5c: 0xe4800094  swc1        $f0, 0x94($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A60u;
}
