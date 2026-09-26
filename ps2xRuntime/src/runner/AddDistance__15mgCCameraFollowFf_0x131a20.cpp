#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddDistance__15mgCCameraFollowFf
// Address: 0x131a20 - 0x131a30
void AddDistance__15mgCCameraFollowFf_0x131a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddDistance__15mgCCameraFollowFf_0x131a20");
#endif

    ctx->pc = 0x131a20u;

    // 0x131a20: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x131a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131a24: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x131a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x131a28: 0x3e00008  jr          $ra
    ctx->pc = 0x131A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A28u;
            // 0x131a2c: 0xe4800090  swc1        $f0, 0x90($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131A30u;
}
