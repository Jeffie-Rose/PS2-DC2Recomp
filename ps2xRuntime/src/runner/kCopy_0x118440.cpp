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
// Address: 0x118440 - 0x118478
void kCopy_0x118440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x118440");
#endif

    switch (ctx->pc) {
        case 0x118450u: goto label_118450;
        default: break;
    }

    ctx->pc = 0x118440u;

    // 0x118440: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x118440u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x118444: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x118444u;
    {
        const bool branch_taken_0x118444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118444u;
            // 0x118448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118444) {
            ctx->pc = 0x118470u;
            goto label_118470;
        }
    }
    ctx->pc = 0x11844Cu;
    // 0x11844c: 0x0  nop
    ctx->pc = 0x11844cu;
    // NOP
label_118450:
    // 0x118450: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x118450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118454: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118458: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x118458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11845c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x11845cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x118460: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x118460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x118464: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x118468: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x118468u;
    {
        const bool branch_taken_0x118468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118468) {
            ctx->pc = 0x118450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118450;
        }
    }
    ctx->pc = 0x118470u;
label_118470:
    // 0x118470: 0x3e00008  jr          $ra
    ctx->pc = 0x118470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118470u;
            // 0x118474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118478u;
}
