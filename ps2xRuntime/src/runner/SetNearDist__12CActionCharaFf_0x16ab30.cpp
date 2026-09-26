#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNearDist__12CActionCharaFf
// Address: 0x16ab30 - 0x16ab60
void SetNearDist__12CActionCharaFf_0x16ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNearDist__12CActionCharaFf_0x16ab30");
#endif

    switch (ctx->pc) {
        case 0x16ab38u: goto label_16ab38;
        default: break;
    }

    ctx->pc = 0x16ab30u;

    // 0x16ab30: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AB30u;
    {
        const bool branch_taken_0x16ab30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab30) {
            ctx->pc = 0x16AB58u;
            goto label_16ab58;
        }
    }
    ctx->pc = 0x16AB38u;
label_16ab38:
    // 0x16ab38: 0xe48c0060  swc1        $f12, 0x60($a0)
    ctx->pc = 0x16ab38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x16ab3c: 0x8c840678  lw          $a0, 0x678($a0)
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
    // 0x16ab40: 0x0  nop
    ctx->pc = 0x16ab40u;
    // NOP
    // 0x16ab44: 0x0  nop
    ctx->pc = 0x16ab44u;
    // NOP
    // 0x16ab48: 0x0  nop
    ctx->pc = 0x16ab48u;
    // NOP
    // 0x16ab4c: 0x0  nop
    ctx->pc = 0x16ab4cu;
    // NOP
    // 0x16ab50: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16AB50u;
    {
        const bool branch_taken_0x16ab50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ab50) {
            ctx->pc = 0x16AB38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ab38;
        }
    }
    ctx->pc = 0x16AB58u;
label_16ab58:
    // 0x16ab58: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AB60u;
}
