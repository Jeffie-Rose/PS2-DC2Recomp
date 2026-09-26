#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sclose
// Address: 0x128a90 - 0x128ab0
void ps2___sclose_0x128a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sclose_0x128a90");
#endif

    switch (ctx->pc) {
        case 0x128aa4u: goto label_128aa4;
        default: break;
    }

    ctx->pc = 0x128a90u;

    // 0x128a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128a98: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x128a9c: 0xc048ffa  jal         func_123FE8
    ctx->pc = 0x128A9Cu;
    SET_GPR_U32(ctx, 31, 0x128AA4u);
    ctx->pc = 0x128AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128A9Cu;
            // 0x128aa0: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123FE8u;
    if (runtime->hasFunction(0x123FE8u)) {
        auto targetFn = runtime->lookupFunction(0x123FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AA4u; }
        if (ctx->pc != 0x128AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _close_r_0x123fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AA4u; }
        if (ctx->pc != 0x128AA4u) { return; }
    }
    ctx->pc = 0x128AA4u;
label_128aa4:
    // 0x128aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x128AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AA8u;
            // 0x128aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128AB0u;
}
