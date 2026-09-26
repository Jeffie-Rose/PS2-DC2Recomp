#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Close__8CGamePadFv
// Address: 0x14a390 - 0x14a3c4
void Close__8CGamePadFv_0x14a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close__8CGamePadFv_0x14a390");
#endif

    switch (ctx->pc) {
        case 0x14a3a4u: goto label_14a3a4;
        case 0x14a3b0u: goto label_14a3b0;
        case 0x14a3b8u: goto label_14a3b8;
        default: break;
    }

    ctx->pc = 0x14a390u;

    // 0x14a390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a39c: 0xc04855c  jal         func_121570
    ctx->pc = 0x14A39Cu;
    SET_GPR_U32(ctx, 31, 0x14A3A4u);
    ctx->pc = 0x14A3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A39Cu;
            // 0x14a3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121570u;
    if (runtime->hasFunction(0x121570u)) {
        auto targetFn = runtime->lookupFunction(0x121570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3A4u; }
        if (ctx->pc != 0x14A3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadPortClose_0x121570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3A4u; }
        if (ctx->pc != 0x14A3A4u) { return; }
    }
    ctx->pc = 0x14A3A4u;
label_14a3a4:
    // 0x14a3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a3a8: 0xc04855c  jal         func_121570
    ctx->pc = 0x14A3A8u;
    SET_GPR_U32(ctx, 31, 0x14A3B0u);
    ctx->pc = 0x14A3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3A8u;
            // 0x14a3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121570u;
    if (runtime->hasFunction(0x121570u)) {
        auto targetFn = runtime->lookupFunction(0x121570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3B0u; }
        if (ctx->pc != 0x14A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadPortClose_0x121570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3B0u; }
        if (ctx->pc != 0x14A3B0u) { return; }
    }
    ctx->pc = 0x14A3B0u;
label_14a3b0:
    // 0x14a3b0: 0xc0484c2  jal         func_121308
    ctx->pc = 0x14A3B0u;
    SET_GPR_U32(ctx, 31, 0x14A3B8u);
    ctx->pc = 0x121308u;
    if (runtime->hasFunction(0x121308u)) {
        auto targetFn = runtime->lookupFunction(0x121308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3B8u; }
        if (ctx->pc != 0x14A3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadEnd_0x121308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3B8u; }
        if (ctx->pc != 0x14A3B8u) { return; }
    }
    ctx->pc = 0x14A3B8u;
label_14a3b8:
    // 0x14a3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3BCu;
            // 0x14a3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A3C4u;
}
