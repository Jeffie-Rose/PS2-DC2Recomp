#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: search_txt_asci__FPc
// Address: 0x30ae30 - 0x30ae74
void search_txt_asci__FPc_0x30ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("search_txt_asci__FPc_0x30ae30");
#endif

    switch (ctx->pc) {
        case 0x30ae44u: goto label_30ae44;
        default: break;
    }

    ctx->pc = 0x30ae30u;

    // 0x30ae30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ae30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae34: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x30ae34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30ae38: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x30ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x30ae3c: 0x2484e230  addiu       $a0, $a0, -0x1DD0
    ctx->pc = 0x30ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959664));
    // 0x30ae40: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x30ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_30ae44:
    // 0x30ae44: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30ae44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ae48: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AE48u;
    {
        const bool branch_taken_0x30ae48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x30ae48) {
            ctx->pc = 0x30AE58u;
            goto label_30ae58;
        }
    }
    ctx->pc = 0x30AE50u;
    // 0x30ae50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30AE50u;
    {
        const bool branch_taken_0x30ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae50) {
            ctx->pc = 0x30AE6Cu;
            goto label_30ae6c;
        }
    }
    ctx->pc = 0x30AE58u;
label_30ae58:
    // 0x30ae58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30ae5c: 0x2843003a  slti        $v1, $v0, 0x3A
    ctx->pc = 0x30ae5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x30ae60: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30AE60u;
    {
        const bool branch_taken_0x30ae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE60u;
            // 0x30ae64: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae60) {
            ctx->pc = 0x30AE44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ae44;
        }
    }
    ctx->pc = 0x30AE68u;
    // 0x30ae68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30ae6c:
    // 0x30ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AE74u;
}
