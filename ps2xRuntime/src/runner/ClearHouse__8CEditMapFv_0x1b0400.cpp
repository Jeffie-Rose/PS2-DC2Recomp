#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearHouse__8CEditMapFv
// Address: 0x1b0400 - 0x1b045c
void ClearHouse__8CEditMapFv_0x1b0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearHouse__8CEditMapFv_0x1b0400");
#endif

    switch (ctx->pc) {
        case 0x1b0420u: goto label_1b0420;
        case 0x1b0434u: goto label_1b0434;
        default: break;
    }

    ctx->pc = 0x1b0400u;

    // 0x1b0400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b0404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b040c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0418: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b041c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b041cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0420:
    // 0x1b0420: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1b0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1b0424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0428: 0x24440d48  addiu       $a0, $v0, 0xD48
    ctx->pc = 0x1b0428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
    // 0x1b042c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1B042Cu;
    SET_GPR_U32(ctx, 31, 0x1B0434u);
    ctx->pc = 0x1B0430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B042Cu;
            // 0x1b0430: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0434u; }
        if (ctx->pc != 0x1B0434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0434u; }
        if (ctx->pc != 0x1B0434u) { return; }
    }
    ctx->pc = 0x1B0434u;
label_1b0434:
    // 0x1b0434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b0434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b0438: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1b0438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b043c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B043Cu;
    {
        const bool branch_taken_0x1b043c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B043Cu;
            // 0x1b0440: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b043c) {
            ctx->pc = 0x1B0420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0420;
        }
    }
    ctx->pc = 0x1B0444u;
    // 0x1b0444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b044c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b044cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0454: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0454u;
            // 0x1b0458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B045Cu;
}
