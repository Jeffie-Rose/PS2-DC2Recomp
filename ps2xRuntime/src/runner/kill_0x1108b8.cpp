#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kill
// Address: 0x1108b8 - 0x1108e0
void kill_0x1108b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kill_0x1108b8");
#endif

    switch (ctx->pc) {
        case 0x1108d0u: goto label_1108d0;
        default: break;
    }

    ctx->pc = 0x1108b8u;

    // 0x1108b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1108b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1108bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1108bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1108c0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1108C0u;
    {
        const bool branch_taken_0x1108c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1108C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1108C0u;
            // 0x1108c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108c0) {
            ctx->pc = 0x1108D0u;
            goto label_1108d0;
        }
    }
    ctx->pc = 0x1108C8u;
    // 0x1108c8: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x1108C8u;
    SET_GPR_U32(ctx, 31, 0x1108D0u);
    ctx->pc = 0x1108CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1108C8u;
            // 0x1108cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108D0u; }
        if (ctx->pc != 0x1108D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108D0u; }
        if (ctx->pc != 0x1108D0u) { return; }
    }
    ctx->pc = 0x1108D0u;
label_1108d0:
    // 0x1108d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1108d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1108d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1108d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1108D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1108DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1108D8u;
            // 0x1108dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1108E0u;
}
