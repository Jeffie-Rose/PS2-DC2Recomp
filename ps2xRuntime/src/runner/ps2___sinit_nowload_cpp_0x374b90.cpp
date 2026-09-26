#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_nowload.cpp
// Address: 0x374b90 - 0x374bb8
void ps2___sinit_nowload_cpp_0x374b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_nowload_cpp_0x374b90");
#endif

    switch (ctx->pc) {
        case 0x374ba4u: goto label_374ba4;
        default: break;
    }

    ctx->pc = 0x374b90u;

    // 0x374b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374b94: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374b9c: 0xc0c26c4  jal         func_309B10
    ctx->pc = 0x374B9Cu;
    SET_GPR_U32(ctx, 31, 0x374BA4u);
    ctx->pc = 0x374BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374B9Cu;
            // 0x374ba0: 0x2484b480  addiu       $a0, $a0, -0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309B10u;
    if (runtime->hasFunction(0x309B10u)) {
        auto targetFn = runtime->lookupFunction(0x309B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BA4u; }
        if (ctx->pc != 0x374BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14NowLoadingInfoFv_0x309b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374BA4u; }
        if (ctx->pc != 0x374BA4u) { return; }
    }
    ctx->pc = 0x374BA4u;
label_374ba4:
    // 0x374ba4: 0xaf80a1bc  sw          $zero, -0x5E44($gp)
    ctx->pc = 0x374ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943164), GPR_U32(ctx, 0));
    // 0x374ba8: 0xaf80a1b8  sw          $zero, -0x5E48($gp)
    ctx->pc = 0x374ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943160), GPR_U32(ctx, 0));
    // 0x374bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x374BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374BB0u;
            // 0x374bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374BB8u;
}
