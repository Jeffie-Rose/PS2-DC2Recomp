#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetObjSeq__Fi
// Address: 0x262910 - 0x262954
void GetObjSeq__Fi_0x262910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjSeq__Fi_0x262910");
#endif

    ctx->pc = 0x262910u;

    // 0x262910: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262910u;
    {
        const bool branch_taken_0x262910 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x262914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262910u;
            // 0x262914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262910) {
            ctx->pc = 0x262928u;
            goto label_262928;
        }
    }
    ctx->pc = 0x262918u;
    // 0x262918: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x262918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26291c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26291Cu;
    {
        const bool branch_taken_0x26291c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26291Cu;
            // 0x262920: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26291c) {
            ctx->pc = 0x262930u;
            goto label_262930;
        }
    }
    ctx->pc = 0x262924u;
    // 0x262924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262928:
    // 0x262928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262928u;
    {
        const bool branch_taken_0x262928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262928) {
            ctx->pc = 0x26294Cu;
            goto label_26294c;
        }
    }
    ctx->pc = 0x262930u;
label_262930:
    // 0x262930: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x262930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x262934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x262934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262938: 0x24425430  addiu       $v0, $v0, 0x5430
    ctx->pc = 0x262938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
    // 0x26293c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26293cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x262940: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x262940u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262944: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x262944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x262948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26294c:
    // 0x26294c: 0x3e00008  jr          $ra
    ctx->pc = 0x26294Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262954u;
}
