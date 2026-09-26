#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: align_size__FUiUi
// Address: 0x149830 - 0x149858
void align_size__FUiUi_0x149830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("align_size__FUiUi_0x149830");
#endif

    ctx->pc = 0x149830u;

    // 0x149830: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x149830u;
    {
        const bool branch_taken_0x149830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x149834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149830u;
            // 0x149834: 0x85001b  divu        $zero, $a0, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149830) {
            ctx->pc = 0x14983Cu;
            goto label_14983c;
        }
    }
    ctx->pc = 0x149838u;
    // 0x149838: 0x1cd  break       0, 7
    ctx->pc = 0x149838u;
    runtime->handleBreak(rdram, ctx);
label_14983c:
    // 0x14983c: 0x1010  mfhi        $v0
    ctx->pc = 0x14983cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x149840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149840u;
    {
        const bool branch_taken_0x149840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149840) {
            ctx->pc = 0x149850u;
            goto label_149850;
        }
    }
    ctx->pc = 0x149848u;
    // 0x149848: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x149848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14984c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_149850:
    // 0x149850: 0x3e00008  jr          $ra
    ctx->pc = 0x149850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149850u;
            // 0x149854: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149858u;
}
