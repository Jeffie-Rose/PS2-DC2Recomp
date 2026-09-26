#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetShortFlag__9CSaveDataFi
// Address: 0x2f6540 - 0x2f6574
void GetShortFlag__9CSaveDataFi_0x2f6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShortFlag__9CSaveDataFi_0x2f6540");
#endif

    ctx->pc = 0x2f6540u;

    // 0x2f6540: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6540u;
    {
        const bool branch_taken_0x2f6540 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F6544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6540u;
            // 0x2f6544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6540) {
            ctx->pc = 0x2F6558u;
            goto label_2f6558;
        }
    }
    ctx->pc = 0x2F6548u;
    // 0x2f6548: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x2f6548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f654c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F654Cu;
    {
        const bool branch_taken_0x2f654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F654Cu;
            // 0x2f6550: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f654c) {
            ctx->pc = 0x2F6560u;
            goto label_2f6560;
        }
    }
    ctx->pc = 0x2F6554u;
    // 0x2f6554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6558:
    // 0x2f6558: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6558u;
    {
        const bool branch_taken_0x2f6558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6558) {
            ctx->pc = 0x2F656Cu;
            goto label_2f656c;
        }
    }
    ctx->pc = 0x2F6560u;
label_2f6560:
    // 0x2f6560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6564: 0x84420100  lh          $v0, 0x100($v0)
    ctx->pc = 0x2f6564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2f6568: 0x0  nop
    ctx->pc = 0x2f6568u;
    // NOP
label_2f656c:
    // 0x2f656c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F656Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6574u;
}
