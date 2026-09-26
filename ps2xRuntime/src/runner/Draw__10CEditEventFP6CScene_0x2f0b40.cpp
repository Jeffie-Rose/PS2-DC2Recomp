#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__10CEditEventFP6CScene
// Address: 0x2f0b40 - 0x2f0b5c
void Draw__10CEditEventFP6CScene_0x2f0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__10CEditEventFP6CScene_0x2f0b40");
#endif

    ctx->pc = 0x2f0b40u;

    // 0x2f0b40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0b48: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F0B48u;
    {
        const bool branch_taken_0x2f0b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B48u;
            // 0x2f0b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b48) {
            ctx->pc = 0x2F0B54u;
            goto label_2f0b54;
        }
    }
    ctx->pc = 0x2F0B50u;
    // 0x2f0b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b54:
    // 0x2f0b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0B5Cu;
}
