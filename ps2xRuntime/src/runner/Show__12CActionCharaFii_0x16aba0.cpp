#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Show__12CActionCharaFii
// Address: 0x16aba0 - 0x16abe0
void Show__12CActionCharaFii_0x16aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Show__12CActionCharaFii_0x16aba0");
#endif

    switch (ctx->pc) {
        case 0x16abb8u: goto label_16abb8;
        default: break;
    }

    ctx->pc = 0x16aba0u;

    // 0x16aba0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16ABA0u;
    {
        const bool branch_taken_0x16aba0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aba0) {
            ctx->pc = 0x16ABB0u;
            goto label_16abb0;
        }
    }
    ctx->pc = 0x16ABA8u;
    // 0x16aba8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16ABA8u;
    {
        const bool branch_taken_0x16aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABA8u;
            // 0x16abac: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aba8) {
            ctx->pc = 0x16ABD8u;
            goto label_16abd8;
        }
    }
    ctx->pc = 0x16ABB0u;
label_16abb0:
    // 0x16abb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16ABB0u;
    {
        const bool branch_taken_0x16abb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abb0) {
            ctx->pc = 0x16ABD8u;
            goto label_16abd8;
        }
    }
    ctx->pc = 0x16ABB8u;
label_16abb8:
    // 0x16abb8: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x16abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x16abbc: 0x8c840678  lw          $a0, 0x678($a0)
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
    // 0x16abc0: 0x0  nop
    ctx->pc = 0x16abc0u;
    // NOP
    // 0x16abc4: 0x0  nop
    ctx->pc = 0x16abc4u;
    // NOP
    // 0x16abc8: 0x0  nop
    ctx->pc = 0x16abc8u;
    // NOP
    // 0x16abcc: 0x0  nop
    ctx->pc = 0x16abccu;
    // NOP
    // 0x16abd0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16ABD0u;
    {
        const bool branch_taken_0x16abd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16abd0) {
            ctx->pc = 0x16ABB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16abb8;
        }
    }
    ctx->pc = 0x16ABD8u;
label_16abd8:
    // 0x16abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x16ABD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16ABE0u;
}
