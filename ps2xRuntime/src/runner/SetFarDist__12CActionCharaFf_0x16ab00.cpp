#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFarDist__12CActionCharaFf
// Address: 0x16ab00 - 0x16ab30
void SetFarDist__12CActionCharaFf_0x16ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFarDist__12CActionCharaFf_0x16ab00");
#endif

    switch (ctx->pc) {
        case 0x16ab08u: goto label_16ab08;
        default: break;
    }

    ctx->pc = 0x16ab00u;

    // 0x16ab00: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AB00u;
    {
        const bool branch_taken_0x16ab00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab00) {
            ctx->pc = 0x16AB28u;
            goto label_16ab28;
        }
    }
    ctx->pc = 0x16AB08u;
label_16ab08:
    // 0x16ab08: 0xe48c0050  swc1        $f12, 0x50($a0)
    ctx->pc = 0x16ab08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x16ab0c: 0x8c840678  lw          $a0, 0x678($a0)
    ctx->pc = 0x16ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
    // 0x16ab10: 0x0  nop
    ctx->pc = 0x16ab10u;
    // NOP
    // 0x16ab14: 0x0  nop
    ctx->pc = 0x16ab14u;
    // NOP
    // 0x16ab18: 0x0  nop
    ctx->pc = 0x16ab18u;
    // NOP
    // 0x16ab1c: 0x0  nop
    ctx->pc = 0x16ab1cu;
    // NOP
    // 0x16ab20: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16AB20u;
    {
        const bool branch_taken_0x16ab20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ab20) {
            ctx->pc = 0x16AB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ab08;
        }
    }
    ctx->pc = 0x16AB28u;
label_16ab28:
    // 0x16ab28: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AB30u;
}
