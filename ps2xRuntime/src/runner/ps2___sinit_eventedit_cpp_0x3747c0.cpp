#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_eventedit.cpp
// Address: 0x3747c0 - 0x3747ec
void ps2___sinit_eventedit_cpp_0x3747c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_eventedit_cpp_0x3747c0");
#endif

    switch (ctx->pc) {
        case 0x3747d4u: goto label_3747d4;
        case 0x3747e0u: goto label_3747e0;
        default: break;
    }

    ctx->pc = 0x3747c0u;

    // 0x3747c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3747c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3747c4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x3747c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x3747c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3747c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3747cc: 0xc0958e0  jal         func_256380
    ctx->pc = 0x3747CCu;
    SET_GPR_U32(ctx, 31, 0x3747D4u);
    ctx->pc = 0x3747D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747CCu;
            // 0x3747d0: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256380u;
    if (runtime->hasFunction(0x256380u)) {
        auto targetFn = runtime->lookupFunction(0x256380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747D4u; }
        if (ctx->pc != 0x3747D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CCameraPasFv_0x256380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747D4u; }
        if (ctx->pc != 0x3747D4u) { return; }
    }
    ctx->pc = 0x3747D4u;
label_3747d4:
    // 0x3747d4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x3747d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x3747d8: 0xc095ac4  jal         func_256B10
    ctx->pc = 0x3747D8u;
    SET_GPR_U32(ctx, 31, 0x3747E0u);
    ctx->pc = 0x3747DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3747D8u;
            // 0x3747dc: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256B10u;
    if (runtime->hasFunction(0x256B10u)) {
        auto targetFn = runtime->lookupFunction(0x256B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747E0u; }
        if (ctx->pc != 0x3747E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CCharaPasFv_0x256b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747E0u; }
        if (ctx->pc != 0x3747E0u) { return; }
    }
    ctx->pc = 0x3747E0u;
label_3747e0:
    // 0x3747e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3747e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3747e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3747E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3747E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3747E4u;
            // 0x3747e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3747ECu;
}
