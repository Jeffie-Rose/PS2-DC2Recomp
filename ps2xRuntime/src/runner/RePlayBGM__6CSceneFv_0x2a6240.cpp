#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RePlayBGM__6CSceneFv
// Address: 0x2a6240 - 0x2a6274
void RePlayBGM__6CSceneFv_0x2a6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RePlayBGM__6CSceneFv_0x2a6240");
#endif

    switch (ctx->pc) {
        case 0x2a6250u: goto label_2a6250;
        case 0x2a6268u: goto label_2a6268;
        default: break;
    }

    ctx->pc = 0x2a6240u;

    // 0x2a6240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a6248: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6248u;
    SET_GPR_U32(ctx, 31, 0x2A6250u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6250u; }
        if (ctx->pc != 0x2A6250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6250u; }
        if (ctx->pc != 0x2A6250u) { return; }
    }
    ctx->pc = 0x2A6250u;
label_2a6250:
    // 0x2a6250: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a6250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a6254: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6254u;
    {
        const bool branch_taken_0x2a6254 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2a6254) {
            ctx->pc = 0x2A6268u;
            goto label_2a6268;
        }
    }
    ctx->pc = 0x2A625Cu;
    // 0x2a625c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a6260: 0xc063818  jal         func_18E060
    ctx->pc = 0x2A6260u;
    SET_GPR_U32(ctx, 31, 0x2A6268u);
    ctx->pc = 0x2A6264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6260u;
            // 0x2a6264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6268u; }
        if (ctx->pc != 0x2A6268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6268u; }
        if (ctx->pc != 0x2A6268u) { return; }
    }
    ctx->pc = 0x2A6268u;
label_2a6268:
    // 0x2a6268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a626c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A626Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A626Cu;
            // 0x2a6270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6274u;
}
