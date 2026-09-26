#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kputs
// Address: 0x111438 - 0x11145c
void kputs_0x111438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputs_0x111438");
#endif

    switch (ctx->pc) {
        case 0x111450u: goto label_111450;
        default: break;
    }

    ctx->pc = 0x111438u;

    // 0x111438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11143c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111440: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111448: 0xc044144  jal         func_110510
    ctx->pc = 0x111448u;
    SET_GPR_U32(ctx, 31, 0x111450u);
    ctx->pc = 0x11144Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111448u;
            // 0x11144c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110510u;
    if (runtime->hasFunction(0x110510u)) {
        auto targetFn = runtime->lookupFunction(0x110510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111450u; }
        if (ctx->pc != 0x111450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Deci2Call_0x110510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111450u; }
        if (ctx->pc != 0x111450u) { return; }
    }
    ctx->pc = 0x111450u;
label_111450:
    // 0x111450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111454: 0x3e00008  jr          $ra
    ctx->pc = 0x111454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111454u;
            // 0x111458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11145Cu;
}
