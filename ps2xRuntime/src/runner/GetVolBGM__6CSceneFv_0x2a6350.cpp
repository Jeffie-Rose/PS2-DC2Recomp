#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVolBGM__6CSceneFv
// Address: 0x2a6350 - 0x2a6370
void GetVolBGM__6CSceneFv_0x2a6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVolBGM__6CSceneFv_0x2a6350");
#endif

    switch (ctx->pc) {
        case 0x2a6360u: goto label_2a6360;
        default: break;
    }

    ctx->pc = 0x2a6350u;

    // 0x2a6350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6358: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6358u;
    SET_GPR_U32(ctx, 31, 0x2A6360u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6360u; }
        if (ctx->pc != 0x2A6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6360u; }
        if (ctx->pc != 0x2A6360u) { return; }
    }
    ctx->pc = 0x2A6360u;
label_2a6360:
    // 0x2a6360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6364: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2a6364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a6368: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6368u;
            // 0x2a636c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6370u;
}
