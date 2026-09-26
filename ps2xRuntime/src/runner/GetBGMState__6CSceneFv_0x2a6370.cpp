#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBGMState__6CSceneFv
// Address: 0x2a6370 - 0x2a6398
void GetBGMState__6CSceneFv_0x2a6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBGMState__6CSceneFv_0x2a6370");
#endif

    switch (ctx->pc) {
        case 0x2a6380u: goto label_2a6380;
        case 0x2a638cu: goto label_2a638c;
        default: break;
    }

    ctx->pc = 0x2a6370u;

    // 0x2a6370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6378: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6378u;
    SET_GPR_U32(ctx, 31, 0x2A6380u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6380u; }
        if (ctx->pc != 0x2A6380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6380u; }
        if (ctx->pc != 0x2A6380u) { return; }
    }
    ctx->pc = 0x2A6380u;
label_2a6380:
    // 0x2a6380: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a6380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a6384: 0xc0638c4  jal         func_18E310
    ctx->pc = 0x2A6384u;
    SET_GPR_U32(ctx, 31, 0x2A638Cu);
    ctx->pc = 0x2A6388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6384u;
            // 0x2a6388: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E310u;
    if (runtime->hasFunction(0x18E310u)) {
        auto targetFn = runtime->lookupFunction(0x18E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A638Cu; }
        if (ctx->pc != 0x2A638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeStatus__FUii_0x18e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A638Cu; }
        if (ctx->pc != 0x2A638Cu) { return; }
    }
    ctx->pc = 0x2A638Cu;
label_2a638c:
    // 0x2a638c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a638cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6390: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6390u;
            // 0x2a6394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6398u;
}
