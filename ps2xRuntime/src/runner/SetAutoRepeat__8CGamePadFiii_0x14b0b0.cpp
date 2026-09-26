#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAutoRepeat__8CGamePadFiii
// Address: 0x14b0b0 - 0x14b12c
void SetAutoRepeat__8CGamePadFiii_0x14b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAutoRepeat__8CGamePadFiii_0x14b0b0");
#endif

    switch (ctx->pc) {
        case 0x14b0d8u: goto label_14b0d8;
        default: break;
    }

    ctx->pc = 0x14b0b0u;

    // 0x14b0b0: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x14b0b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14b0b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B0B4u;
    {
        const bool branch_taken_0x14b0b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0B4u;
            // 0x14b0b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b4) {
            ctx->pc = 0x14B0C0u;
            goto label_14b0c0;
        }
    }
    ctx->pc = 0x14B0BCu;
    // 0x14b0bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14b0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14b0c0:
    // 0x14b0c0: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x14b0c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14b0c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B0C4u;
    {
        const bool branch_taken_0x14b0c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0C4u;
            // 0x14b0c8: 0x248a0144  addiu       $t2, $a0, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0c4) {
            ctx->pc = 0x14B0D0u;
            goto label_14b0d0;
        }
    }
    ctx->pc = 0x14B0CCu;
    // 0x14b0cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14b0d0:
    // 0x14b0d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14b0d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14b0d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b0d8:
    // 0x14b0d8: 0xa91824  and         $v1, $a1, $t1
    ctx->pc = 0x14b0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x14b0dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14B0DCu;
    {
        const bool branch_taken_0x14b0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b0dc) {
            ctx->pc = 0x14B110u;
            goto label_14b110;
        }
    }
    ctx->pc = 0x14B0E4u;
    // 0x14b0e4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14b0e8: 0x1202027  not         $a0, $t1
    ctx->pc = 0x14b0e8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
    // 0x14b0ec: 0x14b6021  addu        $t4, $t2, $t3
    ctx->pc = 0x14b0ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x14b0f0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x14b0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x14b0f4: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x14b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x14b0f8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x14b0fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14b100: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x14b100u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x14b104: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x14b104u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x14b108: 0xad860088  sw          $a2, 0x88($t4)
    ctx->pc = 0x14b108u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 136), GPR_U32(ctx, 6));
    // 0x14b10c: 0xad870108  sw          $a3, 0x108($t4)
    ctx->pc = 0x14b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 264), GPR_U32(ctx, 7));
label_14b110:
    // 0x14b110: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14b110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14b114: 0x29030020  slti        $v1, $t0, 0x20
    ctx->pc = 0x14b114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14b118: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x14b11c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14B11Cu;
    {
        const bool branch_taken_0x14b11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B11Cu;
            // 0x14b120: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b11c) {
            ctx->pc = 0x14B0D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b0d8;
        }
    }
    ctx->pc = 0x14B124u;
    // 0x14b124: 0x3e00008  jr          $ra
    ctx->pc = 0x14B124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B12Cu;
}
