#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAutoRepeat2__8CGamePadFiii
// Address: 0x14b130 - 0x14b1b4
void SetAutoRepeat2__8CGamePadFiii_0x14b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAutoRepeat2__8CGamePadFiii_0x14b130");
#endif

    switch (ctx->pc) {
        case 0x14b158u: goto label_14b158;
        default: break;
    }

    ctx->pc = 0x14b130u;

    // 0x14b130: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x14b130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14b134: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B134u;
    {
        const bool branch_taken_0x14b134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B134u;
            // 0x14b138: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b134) {
            ctx->pc = 0x14B140u;
            goto label_14b140;
        }
    }
    ctx->pc = 0x14B13Cu;
    // 0x14b13c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14b140:
    // 0x14b140: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x14b140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14b144: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B144u;
    {
        const bool branch_taken_0x14b144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B144u;
            // 0x14b148: 0x248a02cc  addiu       $t2, $a0, 0x2CC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b144) {
            ctx->pc = 0x14B150u;
            goto label_14b150;
        }
    }
    ctx->pc = 0x14B14Cu;
    // 0x14b14c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14b150:
    // 0x14b150: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14b150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b154: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14b154u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b158:
    // 0x14b158: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14b15c: 0x891824  and         $v1, $a0, $t1
    ctx->pc = 0x14b15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x14b160: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14B160u;
    {
        const bool branch_taken_0x14b160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B160u;
            // 0x14b164: 0xa91824  and         $v1, $a1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b160) {
            ctx->pc = 0x14B194u;
            goto label_14b194;
        }
    }
    ctx->pc = 0x14B168u;
    // 0x14b168: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14B168u;
    {
        const bool branch_taken_0x14b168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B168u;
            // 0x14b16c: 0x891825  or          $v1, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b168) {
            ctx->pc = 0x14B194u;
            goto label_14b194;
        }
    }
    ctx->pc = 0x14B170u;
    // 0x14b170: 0x14b6021  addu        $t4, $t2, $t3
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x14b174: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x14b174u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x14b178: 0x1202027  not         $a0, $t1
    ctx->pc = 0x14b178u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
    // 0x14b17c: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x14b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x14b180: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14b184: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x14b184u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x14b188: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x14b188u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x14b18c: 0xad860088  sw          $a2, 0x88($t4)
    ctx->pc = 0x14b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 136), GPR_U32(ctx, 6));
    // 0x14b190: 0xad870108  sw          $a3, 0x108($t4)
    ctx->pc = 0x14b190u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 264), GPR_U32(ctx, 7));
label_14b194:
    // 0x14b194: 0x0  nop
    ctx->pc = 0x14b194u;
    // NOP
    // 0x14b198: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14b198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14b19c: 0x29030020  slti        $v1, $t0, 0x20
    ctx->pc = 0x14b19cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14b1a0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x14b1a4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14B1A4u;
    {
        const bool branch_taken_0x14b1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1A4u;
            // 0x14b1a8: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1a4) {
            ctx->pc = 0x14B158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b158;
        }
    }
    ctx->pc = 0x14B1ACu;
    // 0x14b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14B1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B1B4u;
}
