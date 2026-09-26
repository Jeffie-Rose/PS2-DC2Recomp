#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CGeoStoneFv
// Address: 0x28bd20 - 0x28bd48
void Initialize__9CGeoStoneFv_0x28bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CGeoStoneFv_0x28bd20");
#endif

    switch (ctx->pc) {
        case 0x28bd34u: goto label_28bd34;
        default: break;
    }

    ctx->pc = 0x28bd20u;

    // 0x28bd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28bd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28bd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28bd2c: 0xc05d4d0  jal         func_175340
    ctx->pc = 0x28BD2Cu;
    SET_GPR_U32(ctx, 31, 0x28BD34u);
    ctx->pc = 0x28BD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD2Cu;
            // 0x28bd30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BD34u; }
        if (ctx->pc != 0x28BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BD34u; }
        if (ctx->pc != 0x28BD34u) { return; }
    }
    ctx->pc = 0x28BD34u;
label_28bd34:
    // 0x28bd34: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x28bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x28bd38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bd40: 0x3e00008  jr          $ra
    ctx->pc = 0x28BD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD40u;
            // 0x28bd44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BD48u;
}
