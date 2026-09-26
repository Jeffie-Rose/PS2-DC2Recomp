#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Delete__8CColPrimFi
// Address: 0x1ba680 - 0x1ba6b4
void Delete__8CColPrimFi_0x1ba680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Delete__8CColPrimFi_0x1ba680");
#endif

    ctx->pc = 0x1ba680u;

    // 0x1ba680: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba684: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA684u;
    {
        const bool branch_taken_0x1ba684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA684u;
            // 0x1ba688: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba684) {
            ctx->pc = 0x1BA6ACu;
            goto label_1ba6ac;
        }
    }
    ctx->pc = 0x1BA68Cu;
    // 0x1ba68c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA68Cu;
    {
        const bool branch_taken_0x1ba68c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba68c) {
            ctx->pc = 0x1BA69Cu;
            goto label_1ba69c;
        }
    }
    ctx->pc = 0x1BA694u;
    // 0x1ba694: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA694u;
    {
        const bool branch_taken_0x1ba694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA694u;
            // 0x1ba698: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba694) {
            ctx->pc = 0x1BA6ACu;
            goto label_1ba6ac;
        }
    }
    ctx->pc = 0x1BA69Cu;
label_1ba69c:
    // 0x1ba69c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ba69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ba6a0: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA6A0u;
    {
        const bool branch_taken_0x1ba6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ba6a0) {
            ctx->pc = 0x1BA6ACu;
            goto label_1ba6ac;
        }
    }
    ctx->pc = 0x1BA6A8u;
    // 0x1ba6a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ba6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1ba6ac:
    // 0x1ba6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA6B4u;
}
