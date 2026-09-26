#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kFindAddress
// Address: 0x118c88 - 0x118cbc
void kFindAddress_0x118c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kFindAddress_0x118c88");
#endif

    switch (ctx->pc) {
        case 0x118c98u: goto label_118c98;
        default: break;
    }

    ctx->pc = 0x118c88u;

    // 0x118c88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x118c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x118c8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118c90: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118C90u;
    {
        const bool branch_taken_0x118c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x118c90) {
            ctx->pc = 0x118CB4u;
            goto label_118cb4;
        }
    }
    ctx->pc = 0x118C98u;
label_118c98:
    // 0x118c98: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x118c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x118c9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118ca0: 0x0  nop
    ctx->pc = 0x118ca0u;
    // NOP
    // 0x118ca4: 0x0  nop
    ctx->pc = 0x118ca4u;
    // NOP
    // 0x118ca8: 0x0  nop
    ctx->pc = 0x118ca8u;
    // NOP
    // 0x118cac: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118CACu;
    {
        const bool branch_taken_0x118cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x118cac) {
            ctx->pc = 0x118C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118c98;
        }
    }
    ctx->pc = 0x118CB4u;
label_118cb4:
    // 0x118cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x118CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118CB4u;
            // 0x118cb8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118CBCu;
}
