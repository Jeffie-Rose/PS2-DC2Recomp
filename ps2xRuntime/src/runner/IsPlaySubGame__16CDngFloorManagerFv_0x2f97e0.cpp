#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsPlaySubGame__16CDngFloorManagerFv
// Address: 0x2f97e0 - 0x2f9838
void IsPlaySubGame__16CDngFloorManagerFv_0x2f97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsPlaySubGame__16CDngFloorManagerFv_0x2f97e0");
#endif

    switch (ctx->pc) {
        case 0x2f97f4u: goto label_2f97f4;
        default: break;
    }

    ctx->pc = 0x2f97e0u;

    // 0x2f97e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f97e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f97e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f97e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f97e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f97ec: 0xc0be77c  jal         func_2F9DF0
    ctx->pc = 0x2F97ECu;
    SET_GPR_U32(ctx, 31, 0x2F97F4u);
    ctx->pc = 0x2F97F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97ECu;
            // 0x2f97f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DF0u;
    if (runtime->hasFunction(0x2F9DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97F4u; }
        if (ctx->pc != 0x2F97F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFloorInfo__16CDngFloorManagerFv_0x2f9df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97F4u; }
        if (ctx->pc != 0x2F97F4u) { return; }
    }
    ctx->pc = 0x2F97F4u;
label_2f97f4:
    // 0x2f97f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F97F4u;
    {
        const bool branch_taken_0x2f97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f97f4) {
            ctx->pc = 0x2F9804u;
            goto label_2f9804;
        }
    }
    ctx->pc = 0x2F97FCu;
    // 0x2f97fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F97FCu;
    {
        const bool branch_taken_0x2f97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97FCu;
            // 0x2f9800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f97fc) {
            ctx->pc = 0x2F9828u;
            goto label_2f9828;
        }
    }
    ctx->pc = 0x2F9804u;
label_2f9804:
    // 0x2f9804: 0x80430017  lb          $v1, 0x17($v0)
    ctx->pc = 0x2f9804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x2f9808: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9808u;
    {
        const bool branch_taken_0x2f9808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9808) {
            ctx->pc = 0x2F9814u;
            goto label_2f9814;
        }
    }
    ctx->pc = 0x2F9810u;
    // 0x2f9810: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x2f9810u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_2f9814:
    // 0x2f9814: 0x80420015  lb          $v0, 0x15($v0)
    ctx->pc = 0x2f9814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x2f9818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9818u;
    {
        const bool branch_taken_0x2f9818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9818u;
            // 0x2f981c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9818) {
            ctx->pc = 0x2F9828u;
            goto label_2f9828;
        }
    }
    ctx->pc = 0x2F9820u;
    // 0x2f9820: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2f9820u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x2f9824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f9824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9828:
    // 0x2f9828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f982c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f982cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9830: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9830u;
            // 0x2f9834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9838u;
}
