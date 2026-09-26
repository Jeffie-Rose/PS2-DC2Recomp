#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDngMapFloorGlidInfo__16CDngFloorManagerFi
// Address: 0x2f9610 - 0x2f9688
void GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610");
#endif

    switch (ctx->pc) {
        case 0x2f963cu: goto label_2f963c;
        default: break;
    }

    ctx->pc = 0x2f9610u;

    // 0x2f9610: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2f9610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9614: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9614u;
    {
        const bool branch_taken_0x2f9614 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9614u;
            // 0x2f9618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9614) {
            ctx->pc = 0x2F9628u;
            goto label_2f9628;
        }
    }
    ctx->pc = 0x2F961Cu;
    // 0x2f961c: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x2f961cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f9620: 0x1d200003  bgtz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9620u;
    {
        const bool branch_taken_0x2f9620 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2F9624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9620u;
            // 0x2f9624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9620) {
            ctx->pc = 0x2F9630u;
            goto label_2f9630;
        }
    }
    ctx->pc = 0x2F9628u;
label_2f9628:
    // 0x2f9628: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F9628u;
    {
        const bool branch_taken_0x2f9628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9628) {
            ctx->pc = 0x2F9680u;
            goto label_2f9680;
        }
    }
    ctx->pc = 0x2F9630u;
label_2f9630:
    // 0x2f9630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9634: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F9634u;
    {
        const bool branch_taken_0x2f9634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9634u;
            // 0x2f9638: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9634) {
            ctx->pc = 0x2F966Cu;
            goto label_2f966c;
        }
    }
    ctx->pc = 0x2F963Cu;
label_2f963c:
    // 0x2f963c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2f963cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f9640: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9640u;
    {
        const bool branch_taken_0x2f9640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9640) {
            ctx->pc = 0x2F9664u;
            goto label_2f9664;
        }
    }
    ctx->pc = 0x2F9648u;
    // 0x2f9648: 0x81020028  lb          $v0, 0x28($t0)
    ctx->pc = 0x2f9648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2f964c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F964Cu;
    {
        const bool branch_taken_0x2f964c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F964Cu;
            // 0x2f9650: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f964c) {
            ctx->pc = 0x2F9664u;
            goto label_2f9664;
        }
    }
    ctx->pc = 0x2F9654u;
    // 0x2f9654: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2f9654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9658: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2f9658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f965c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F965Cu;
    {
        const bool branch_taken_0x2f965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F965Cu;
            // 0x2f9660: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f965c) {
            ctx->pc = 0x2F9680u;
            goto label_2f9680;
        }
    }
    ctx->pc = 0x2F9664u;
label_2f9664:
    // 0x2f9664: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x2f9664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2f9668: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f9668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f966c:
    // 0x2f966c: 0x0  nop
    ctx->pc = 0x2f966cu;
    // NOP
    // 0x2f9670: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x2f9670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2f9674: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2F9674u;
    {
        const bool branch_taken_0x2f9674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9674u;
            // 0x2f9678: 0xe64021  addu        $t0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9674) {
            ctx->pc = 0x2F963Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f963c;
        }
    }
    ctx->pc = 0x2F967Cu;
    // 0x2f967c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f967cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9680:
    // 0x2f9680: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9688u;
}
