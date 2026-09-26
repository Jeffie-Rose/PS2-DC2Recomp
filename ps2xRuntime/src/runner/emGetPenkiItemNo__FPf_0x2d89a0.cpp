#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emGetPenkiItemNo__FPf
// Address: 0x2d89a0 - 0x2d89c4
void emGetPenkiItemNo__FPf_0x2d89a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emGetPenkiItemNo__FPf_0x2d89a0");
#endif

    switch (ctx->pc) {
        case 0x2d89b0u: goto label_2d89b0;
        case 0x2d89b8u: goto label_2d89b8;
        default: break;
    }

    ctx->pc = 0x2d89a0u;

    // 0x2d89a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d89a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d89a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d89a8: 0xc0b623c  jal         func_2D88F0
    ctx->pc = 0x2D89A8u;
    SET_GPR_U32(ctx, 31, 0x2D89B0u);
    ctx->pc = 0x2D88F0u;
    if (runtime->hasFunction(0x2D88F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D88F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89B0u; }
        if (ctx->pc != 0x2D89B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        emSearchColorCode__FPf_0x2d88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89B0u; }
        if (ctx->pc != 0x2D89B0u) { return; }
    }
    ctx->pc = 0x2D89B0u;
label_2d89b0:
    // 0x2d89b0: 0xc0b6258  jal         func_2D8960
    ctx->pc = 0x2D89B0u;
    SET_GPR_U32(ctx, 31, 0x2D89B8u);
    ctx->pc = 0x2D89B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89B0u;
            // 0x2d89b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8960u;
    if (runtime->hasFunction(0x2D8960u)) {
        auto targetFn = runtime->lookupFunction(0x2D8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89B8u; }
        if (ctx->pc != 0x2D89B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        emGetPenkiItemNo__Fi_0x2d8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D89B8u; }
        if (ctx->pc != 0x2D89B8u) { return; }
    }
    ctx->pc = 0x2D89B8u;
label_2d89b8:
    // 0x2d89b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d89b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d89bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D89BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D89C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89BCu;
            // 0x2d89c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D89C4u;
}
