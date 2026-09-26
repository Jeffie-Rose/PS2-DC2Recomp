#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsRun__21CLevelUpEffectManagerFv
// Address: 0x22e8d0 - 0x22e938
void IsRun__21CLevelUpEffectManagerFv_0x22e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsRun__21CLevelUpEffectManagerFv_0x22e8d0");
#endif

    switch (ctx->pc) {
        case 0x22e8f0u: goto label_22e8f0;
        case 0x22e8fcu: goto label_22e8fc;
        default: break;
    }

    ctx->pc = 0x22e8d0u;

    // 0x22e8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e8d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22e8d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e8dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e8e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e8e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e8f0:
    // 0x22e8f0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x22e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22e8f4: 0xc08b908  jal         func_22E420
    ctx->pc = 0x22E8F4u;
    SET_GPR_U32(ctx, 31, 0x22E8FCu);
    ctx->pc = 0x22E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8F4u;
            // 0x22e8f8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E420u;
    if (runtime->hasFunction(0x22E420u)) {
        auto targetFn = runtime->lookupFunction(0x22E420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8FCu; }
        if (ctx->pc != 0x22E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRun__14CLevelUpEffectFv_0x22e420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8FCu; }
        if (ctx->pc != 0x22E8FCu) { return; }
    }
    ctx->pc = 0x22E8FCu;
label_22e8fc:
    // 0x22e8fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E8FCu;
    {
        const bool branch_taken_0x22e8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8FCu;
            // 0x22e900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8fc) {
            ctx->pc = 0x22E90Cu;
            goto label_22e90c;
        }
    }
    ctx->pc = 0x22E904u;
    // 0x22e904: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22E904u;
    {
        const bool branch_taken_0x22e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E904u;
            // 0x22e908: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e904) {
            ctx->pc = 0x22E924u;
            goto label_22e924;
        }
    }
    ctx->pc = 0x22E90Cu;
label_22e90c:
    // 0x22e90c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e910: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x22e910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22e914: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22E914u;
    {
        const bool branch_taken_0x22e914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E914u;
            // 0x22e918: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e914) {
            ctx->pc = 0x22E8F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e8f0;
        }
    }
    ctx->pc = 0x22E91Cu;
    // 0x22e91c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e924:
    // 0x22e924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e930: 0x3e00008  jr          $ra
    ctx->pc = 0x22E930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E930u;
            // 0x22e934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E938u;
}
