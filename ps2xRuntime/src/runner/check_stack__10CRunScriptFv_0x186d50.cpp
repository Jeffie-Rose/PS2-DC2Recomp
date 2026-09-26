#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: check_stack__10CRunScriptFv
// Address: 0x186d50 - 0x186d80
void check_stack__10CRunScriptFv_0x186d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("check_stack__10CRunScriptFv_0x186d50");
#endif

    switch (ctx->pc) {
        case 0x186d74u: goto label_186d74;
        default: break;
    }

    ctx->pc = 0x186d50u;

    // 0x186d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186d58: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x186d5c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x186d60: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x186d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186d64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D64u;
    {
        const bool branch_taken_0x186d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d64) {
            ctx->pc = 0x186D74u;
            goto label_186d74;
        }
    }
    ctx->pc = 0x186D6Cu;
    // 0x186d6c: 0xc061ac8  jal         func_186B20
    ctx->pc = 0x186D6Cu;
    SET_GPR_U32(ctx, 31, 0x186D74u);
    ctx->pc = 0x186B20u;
    if (runtime->hasFunction(0x186B20u)) {
        auto targetFn = runtime->lookupFunction(0x186B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D74u; }
        if (ctx->pc != 0x186D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stkoverflow__Fv_0x186b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D74u; }
        if (ctx->pc != 0x186D74u) { return; }
    }
    ctx->pc = 0x186D74u;
label_186d74:
    // 0x186d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186d78: 0x3e00008  jr          $ra
    ctx->pc = 0x186D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D78u;
            // 0x186d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186D80u;
}
