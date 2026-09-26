#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mcHearAlarm
// Address: 0x122d78 - 0x122d9c
void mcHearAlarm_0x122d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcHearAlarm_0x122d78");
#endif

    switch (ctx->pc) {
        case 0x122d88u: goto label_122d88;
        default: break;
    }

    ctx->pc = 0x122d78u;

    // 0x122d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122d80: 0xc044434  jal         func_1110D0
    ctx->pc = 0x122D80u;
    SET_GPR_U32(ctx, 31, 0x122D88u);
    ctx->pc = 0x122D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122D80u;
            // 0x122d84: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1110D0u;
    if (runtime->hasFunction(0x1110D0u)) {
        auto targetFn = runtime->lookupFunction(0x1110D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D88u; }
        if (ctx->pc != 0x122D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iWakeupThread_0x1110d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D88u; }
        if (ctx->pc != 0x122D88u) { return; }
    }
    ctx->pc = 0x122D88u;
label_122d88:
    // 0x122d88: 0xf  sync
    ctx->pc = 0x122d88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x122d8c: 0x42000038  ei
    ctx->pc = 0x122d8cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x122d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122d94: 0x3e00008  jr          $ra
    ctx->pc = 0x122D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D94u;
            // 0x122d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122D9Cu;
}
