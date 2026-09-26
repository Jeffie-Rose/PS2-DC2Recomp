#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReversVec__8CColPrimFPf
// Address: 0x1ba4f0 - 0x1ba528
void GetReversVec__8CColPrimFPf_0x1ba4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReversVec__8CColPrimFPf_0x1ba4f0");
#endif

    switch (ctx->pc) {
        case 0x1ba51cu: goto label_1ba51c;
        default: break;
    }

    ctx->pc = 0x1ba4f0u;

    // 0x1ba4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba4f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ba4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ba4fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA4FCu;
    {
        const bool branch_taken_0x1ba4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4FCu;
            // 0x1ba500: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4fc) {
            ctx->pc = 0x1BA51Cu;
            goto label_1ba51c;
        }
    }
    ctx->pc = 0x1BA504u;
    // 0x1ba504: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1ba504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ba508: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA508u;
    {
        const bool branch_taken_0x1ba508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA508u;
            // 0x1ba50c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba508) {
            ctx->pc = 0x1BA51Cu;
            goto label_1ba51c;
        }
    }
    ctx->pc = 0x1BA510u;
    // 0x1ba510: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1ba514: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA514u;
    SET_GPR_U32(ctx, 31, 0x1BA51Cu);
    ctx->pc = 0x1BA518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA514u;
            // 0x1ba518: 0x24e50060  addiu       $a1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA51Cu; }
        if (ctx->pc != 0x1BA51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA51Cu; }
        if (ctx->pc != 0x1BA51Cu) { return; }
    }
    ctx->pc = 0x1BA51Cu;
label_1ba51c:
    // 0x1ba51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba520: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA520u;
            // 0x1ba524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA528u;
}
