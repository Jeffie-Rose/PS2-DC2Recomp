#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceFsWaitS
// Address: 0x113f08 - 0x113f34
void _sceFsWaitS_0x113f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFsWaitS_0x113f08");
#endif

    switch (ctx->pc) {
        case 0x113f18u: goto label_113f18;
        case 0x113f24u: goto label_113f24;
        default: break;
    }

    ctx->pc = 0x113f08u;

    // 0x113f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113f10: 0xc044fae  jal         func_113EB8
    ctx->pc = 0x113F10u;
    SET_GPR_U32(ctx, 31, 0x113F18u);
    ctx->pc = 0x113EB8u;
    if (runtime->hasFunction(0x113EB8u)) {
        auto targetFn = runtime->lookupFunction(0x113EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F18u; }
        if (ctx->pc != 0x113F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsSemInit_0x113eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F18u; }
        if (ctx->pc != 0x113F18u) { return; }
    }
    ctx->pc = 0x113F18u;
label_113f18:
    // 0x113f18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x113f1c: 0xc044048  jal         func_110120
    ctx->pc = 0x113F1Cu;
    SET_GPR_U32(ctx, 31, 0x113F24u);
    ctx->pc = 0x113F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113F1Cu;
            // 0x113f20: 0x8c440f24  lw          $a0, 0xF24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F24u; }
        if (ctx->pc != 0x113F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F24u; }
        if (ctx->pc != 0x113F24u) { return; }
    }
    ctx->pc = 0x113F24u;
label_113f24:
    // 0x113f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x113F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113F2Cu;
            // 0x113f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113F34u;
}
