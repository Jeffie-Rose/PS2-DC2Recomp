#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefBgmNo__6CSceneFi
// Address: 0x2a6cc0 - 0x2a6cf0
void GetDefBgmNo__6CSceneFi_0x2a6cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefBgmNo__6CSceneFi_0x2a6cc0");
#endif

    switch (ctx->pc) {
        case 0x2a6cd0u: goto label_2a6cd0;
        default: break;
    }

    ctx->pc = 0x2a6cc0u;

    // 0x2a6cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6cc8: 0xc0a9b0c  jal         func_2A6C30
    ctx->pc = 0x2A6CC8u;
    SET_GPR_U32(ctx, 31, 0x2A6CD0u);
    ctx->pc = 0x2A6C30u;
    if (runtime->hasFunction(0x2A6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CD0u; }
        if (ctx->pc != 0x2A6CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSndDataID__6CSceneFi_0x2a6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6CD0u; }
        if (ctx->pc != 0x2A6CD0u) { return; }
    }
    ctx->pc = 0x2A6CD0u;
label_2a6cd0:
    // 0x2a6cd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6CD0u;
    {
        const bool branch_taken_0x2a6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6cd0) {
            ctx->pc = 0x2A6CE0u;
            goto label_2a6ce0;
        }
    }
    ctx->pc = 0x2A6CD8u;
    // 0x2a6cd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6CD8u;
    {
        const bool branch_taken_0x2a6cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CD8u;
            // 0x2a6cdc: 0x84420002  lh          $v0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cd8) {
            ctx->pc = 0x2A6CE4u;
            goto label_2a6ce4;
        }
    }
    ctx->pc = 0x2A6CE0u;
label_2a6ce0:
    // 0x2a6ce0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a6ce4:
    // 0x2a6ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6CE8u;
            // 0x2a6cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6CF0u;
}
