#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__4CEohFiP13CEventSprite2
// Address: 0x25d580 - 0x25d5bc
void Set__4CEohFiP13CEventSprite2_0x25d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__4CEohFiP13CEventSprite2_0x25d580");
#endif

    ctx->pc = 0x25d580u;

    // 0x25d580: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D580u;
    {
        const bool branch_taken_0x25d580 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D580u;
            // 0x25d584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d580) {
            ctx->pc = 0x25D590u;
            goto label_25d590;
        }
    }
    ctx->pc = 0x25D588u;
    // 0x25d588: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25D588u;
    {
        const bool branch_taken_0x25d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d588) {
            ctx->pc = 0x25D5B4u;
            goto label_25d5b4;
        }
    }
    ctx->pc = 0x25D590u;
label_25d590:
    // 0x25d590: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25d590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25d594: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d598: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25d598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d59c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D59Cu;
    {
        const bool branch_taken_0x25d59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d59c) {
            ctx->pc = 0x25D5ACu;
            goto label_25d5ac;
        }
    }
    ctx->pc = 0x25D5A4u;
    // 0x25d5a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D5A4u;
    {
        const bool branch_taken_0x25d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D5A4u;
            // 0x25d5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5a4) {
            ctx->pc = 0x25D5B4u;
            goto label_25d5b4;
        }
    }
    ctx->pc = 0x25D5ACu;
label_25d5ac:
    // 0x25d5ac: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x25d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x25d5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d5b4:
    // 0x25d5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D5BCu;
}
