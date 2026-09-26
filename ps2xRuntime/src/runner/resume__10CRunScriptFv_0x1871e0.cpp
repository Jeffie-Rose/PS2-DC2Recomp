#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: resume__10CRunScriptFv
// Address: 0x1871e0 - 0x187208
void resume__10CRunScriptFv_0x1871e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("resume__10CRunScriptFv_0x1871e0");
#endif

    switch (ctx->pc) {
        case 0x1871fcu: goto label_1871fc;
        default: break;
    }

    ctx->pc = 0x1871e0u;

    // 0x1871e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1871e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1871e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1871e8: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1871ec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1871ECu;
    {
        const bool branch_taken_0x1871ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1871ec) {
            ctx->pc = 0x1871FCu;
            goto label_1871fc;
        }
    }
    ctx->pc = 0x1871F4u;
    // 0x1871f4: 0xc061cf0  jal         func_1873C0
    ctx->pc = 0x1871F4u;
    SET_GPR_U32(ctx, 31, 0x1871FCu);
    ctx->pc = 0x1873C0u;
    if (runtime->hasFunction(0x1873C0u)) {
        auto targetFn = runtime->lookupFunction(0x1873C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871FCu; }
        if (ctx->pc != 0x1871FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exe__10CRunScriptFP8vmcode_t_0x1873c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871FCu; }
        if (ctx->pc != 0x1871FCu) { return; }
    }
    ctx->pc = 0x1871FCu;
label_1871fc:
    // 0x1871fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1871fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187200: 0x3e00008  jr          $ra
    ctx->pc = 0x187200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187200u;
            // 0x187204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187208u;
}
