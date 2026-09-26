#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sigtramp
// Address: 0x1287c0 - 0x1287e8
void ps2___sigtramp_0x1287c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sigtramp_0x1287c0");
#endif

    switch (ctx->pc) {
        case 0x1287dcu: goto label_1287dc;
        default: break;
    }

    ctx->pc = 0x1287c0u;

    // 0x1287c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1287c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1287c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1287cc: 0x8c443b84  lw          $a0, 0x3B84($v0)
    ctx->pc = 0x1287ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15236)));
    // 0x1287d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1287d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1287d4: 0xc04a1a2  jal         func_128688
    ctx->pc = 0x1287D4u;
    SET_GPR_U32(ctx, 31, 0x1287DCu);
    ctx->pc = 0x128688u;
    if (runtime->hasFunction(0x128688u)) {
        auto targetFn = runtime->lookupFunction(0x128688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287DCu; }
        if (ctx->pc != 0x1287DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sigtramp_r_0x128688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287DCu; }
        if (ctx->pc != 0x1287DCu) { return; }
    }
    ctx->pc = 0x1287DCu;
label_1287dc:
    // 0x1287dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1287dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1287E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1287E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287E0u;
            // 0x1287e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1287E8u;
}
