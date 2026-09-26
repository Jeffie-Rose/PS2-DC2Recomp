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
// Address: 0x110e00 - 0x110e38
void kCopy_0x110e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x110e00");
#endif

    switch (ctx->pc) {
        case 0x110e10u: goto label_110e10;
        default: break;
    }

    ctx->pc = 0x110e00u;

    // 0x110e00: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x110e00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x110e04: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x110E04u;
    {
        const bool branch_taken_0x110e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E04u;
            // 0x110e08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e04) {
            ctx->pc = 0x110E30u;
            goto label_110e30;
        }
    }
    ctx->pc = 0x110E0Cu;
    // 0x110e0c: 0x0  nop
    ctx->pc = 0x110e0cu;
    // NOP
label_110e10:
    // 0x110e10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x110e14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x110e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x110e18: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x110e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x110e1c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x110e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x110e20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x110e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x110e24: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x110e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x110e28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110e28) {
            ctx->pc = 0x110E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110e10;
        }
    }
    ctx->pc = 0x110E30u;
label_110e30:
    // 0x110e30: 0x3e00008  jr          $ra
    ctx->pc = 0x110E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E30u;
            // 0x110e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110E38u;
}
