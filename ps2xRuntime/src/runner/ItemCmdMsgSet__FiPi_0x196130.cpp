#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ItemCmdMsgSet__FiPi
// Address: 0x196130 - 0x19619c
void ItemCmdMsgSet__FiPi_0x196130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ItemCmdMsgSet__FiPi_0x196130");
#endif

    switch (ctx->pc) {
        case 0x19614cu: goto label_19614c;
        default: break;
    }

    ctx->pc = 0x196130u;

    // 0x196130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19613c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x196140: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x196140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x196144: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x196144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x196148: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19614c:
    // 0x19614c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x19614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x196150: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x196154: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196158: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x196158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x19615c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x19615cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x196160: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x196160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x196164: 0x28631388  slti        $v1, $v1, 0x1388
    ctx->pc = 0x196164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5000) ? 1 : 0);
    // 0x196168: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x196168u;
    {
        const bool branch_taken_0x196168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196168) {
            ctx->pc = 0x196184u;
            goto label_196184;
        }
    }
    ctx->pc = 0x196170u;
    // 0x196170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x196174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196178: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x196178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19617c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x19617Cu;
    {
        const bool branch_taken_0x19617c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19617Cu;
            // 0x196180: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19617c) {
            ctx->pc = 0x19614Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19614c;
        }
    }
    ctx->pc = 0x196184u;
label_196184:
    // 0x196184: 0x0  nop
    ctx->pc = 0x196184u;
    // NOP
    // 0x196188: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x196188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19618c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x196190: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x196190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196194: 0x3e00008  jr          $ra
    ctx->pc = 0x196194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196194u;
            // 0x196198: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19619Cu;
}
