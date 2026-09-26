#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RotBack__14CCameraControlFf
// Address: 0x2ec890 - 0x2ec8a0
void RotBack__14CCameraControlFf_0x2ec890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RotBack__14CCameraControlFf_0x2ec890");
#endif

    ctx->pc = 0x2ec890u;

    // 0x2ec890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec894: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x2ec894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
    // 0x2ec898: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC898u;
            // 0x2ec89c: 0xe48c00cc  swc1        $f12, 0xCC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC8A0u;
}
