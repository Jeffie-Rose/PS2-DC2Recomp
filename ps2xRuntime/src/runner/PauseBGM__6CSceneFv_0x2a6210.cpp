#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseBGM__6CSceneFv
// Address: 0x2a6210 - 0x2a6240
void PauseBGM__6CSceneFv_0x2a6210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseBGM__6CSceneFv_0x2a6210");
#endif

    switch (ctx->pc) {
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6234u: goto label_2a6234;
        default: break;
    }

    ctx->pc = 0x2a6210u;

    // 0x2a6210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6218: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6218u;
    SET_GPR_U32(ctx, 31, 0x2A6220u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6220u; }
        if (ctx->pc != 0x2A6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6220u; }
        if (ctx->pc != 0x2A6220u) { return; }
    }
    ctx->pc = 0x2A6220u;
label_2a6220:
    // 0x2a6220: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a6220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a6224: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6224u;
    {
        const bool branch_taken_0x2a6224 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2a6224) {
            ctx->pc = 0x2A6234u;
            goto label_2a6234;
        }
    }
    ctx->pc = 0x2A622Cu;
    // 0x2a622c: 0xc063884  jal         func_18E210
    ctx->pc = 0x2A622Cu;
    SET_GPR_U32(ctx, 31, 0x2A6234u);
    ctx->pc = 0x2A6230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A622Cu;
            // 0x2a6230: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E210u;
    if (runtime->hasFunction(0x18E210u)) {
        auto targetFn = runtime->lookupFunction(0x18E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6234u; }
        if (ctx->pc != 0x2A6234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePause__FUii_0x18e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6234u; }
        if (ctx->pc != 0x2A6234u) { return; }
    }
    ctx->pc = 0x2A6234u;
label_2a6234:
    // 0x2a6234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6238: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6238u;
            // 0x2a623c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6240u;
}
