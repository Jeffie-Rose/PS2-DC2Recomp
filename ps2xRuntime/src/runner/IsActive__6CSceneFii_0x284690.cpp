#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsActive__6CSceneFii
// Address: 0x284690 - 0x2846cc
void IsActive__6CSceneFii_0x284690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsActive__6CSceneFii_0x284690");
#endif

    switch (ctx->pc) {
        case 0x2846a0u: goto label_2846a0;
        default: break;
    }

    ctx->pc = 0x284690u;

    // 0x284690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284698: 0xc0a0da8  jal         func_2836A0
    ctx->pc = 0x284698u;
    SET_GPR_U32(ctx, 31, 0x2846A0u);
    ctx->pc = 0x2836A0u;
    if (runtime->hasFunction(0x2836A0u)) {
        auto targetFn = runtime->lookupFunction(0x2836A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2846A0u; }
        if (ctx->pc != 0x2846A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__6CSceneFii_0x2836a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2846A0u; }
        if (ctx->pc != 0x2846A0u) { return; }
    }
    ctx->pc = 0x2846A0u;
label_2846a0:
    // 0x2846a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2846A0u;
    {
        const bool branch_taken_0x2846a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846a0) {
            ctx->pc = 0x2846BCu;
            goto label_2846bc;
        }
    }
    ctx->pc = 0x2846A8u;
    // 0x2846a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2846a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2846ac: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2846acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2846b0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2846b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2846b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2846B4u;
    {
        const bool branch_taken_0x2846b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846B4u;
            // 0x2846b8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846b4) {
            ctx->pc = 0x2846C0u;
            goto label_2846c0;
        }
    }
    ctx->pc = 0x2846BCu;
label_2846bc:
    // 0x2846bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2846bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2846c0:
    // 0x2846c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2846c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2846c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2846C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2846C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846C4u;
            // 0x2846c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2846CCu;
}
