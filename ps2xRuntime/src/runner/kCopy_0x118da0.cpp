#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kCopy
// Address: 0x118da0 - 0x118dd8
void kCopy_0x118da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x118da0");
#endif

    switch (ctx->pc) {
        case 0x118db0u: goto label_118db0;
        default: break;
    }

    ctx->pc = 0x118da0u;

    // 0x118da0: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x118da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x118da4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x118DA4u;
    {
        const bool branch_taken_0x118da4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118DA4u;
            // 0x118da8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118da4) {
            ctx->pc = 0x118DD0u;
            goto label_118dd0;
        }
    }
    ctx->pc = 0x118DACu;
    // 0x118dac: 0x0  nop
    ctx->pc = 0x118dacu;
    // NOP
label_118db0:
    // 0x118db0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118db4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118db8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x118db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x118dbc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x118dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x118dc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x118dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x118dc4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x118dc8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x118DC8u;
    {
        const bool branch_taken_0x118dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118dc8) {
            ctx->pc = 0x118DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118db0;
        }
    }
    ctx->pc = 0x118DD0u;
label_118dd0:
    // 0x118dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x118DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118DD0u;
            // 0x118dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118DD8u;
}
