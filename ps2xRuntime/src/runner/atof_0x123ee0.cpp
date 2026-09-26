#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: atof
// Address: 0x123ee0 - 0x123efc
void atof_0x123ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atof_0x123ee0");
#endif

    switch (ctx->pc) {
        case 0x123ef0u: goto label_123ef0;
        default: break;
    }

    ctx->pc = 0x123ee0u;

    // 0x123ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123ee8: 0xc04a9aa  jal         func_12A6A8
    ctx->pc = 0x123EE8u;
    SET_GPR_U32(ctx, 31, 0x123EF0u);
    ctx->pc = 0x123EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123EE8u;
            // 0x123eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A6A8u;
    if (runtime->hasFunction(0x12A6A8u)) {
        auto targetFn = runtime->lookupFunction(0x12A6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EF0u; }
        if (ctx->pc != 0x123EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strtod_0x12a6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EF0u; }
        if (ctx->pc != 0x123EF0u) { return; }
    }
    ctx->pc = 0x123EF0u;
label_123ef0:
    // 0x123ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x123EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123EF4u;
            // 0x123ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123EFCu;
}
