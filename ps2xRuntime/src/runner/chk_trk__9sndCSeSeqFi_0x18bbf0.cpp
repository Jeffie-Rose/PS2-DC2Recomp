#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: chk_trk__9sndCSeSeqFi
// Address: 0x18bbf0 - 0x18bc14
void chk_trk__9sndCSeSeqFi_0x18bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chk_trk__9sndCSeSeqFi_0x18bbf0");
#endif

    ctx->pc = 0x18bbf0u;

    // 0x18bbf0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BBF0u;
    {
        const bool branch_taken_0x18bbf0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBF0u;
            // 0x18bbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbf0) {
            ctx->pc = 0x18BC0Cu;
            goto label_18bc0c;
        }
    }
    ctx->pc = 0x18BBF8u;
    // 0x18bbf8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x18bbfc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18bbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bc00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BC00u;
    {
        const bool branch_taken_0x18bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC00u;
            // 0x18bc04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc00) {
            ctx->pc = 0x18BC0Cu;
            goto label_18bc0c;
        }
    }
    ctx->pc = 0x18BC08u;
    // 0x18bc08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bc0c:
    // 0x18bc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BC14u;
}
