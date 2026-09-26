#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSaveData__Fv
// Address: 0x1908a0 - 0x1908c4
void InitSaveData__Fv_0x1908a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSaveData__Fv_0x1908a0");
#endif

    switch (ctx->pc) {
        case 0x1908b0u: goto label_1908b0;
        case 0x1908b8u: goto label_1908b8;
        default: break;
    }

    ctx->pc = 0x1908a0u;

    // 0x1908a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1908a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1908a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1908a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1908a8: 0xc064220  jal         func_190880
    ctx->pc = 0x1908A8u;
    SET_GPR_U32(ctx, 31, 0x1908B0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908B0u; }
        if (ctx->pc != 0x1908B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908B0u; }
        if (ctx->pc != 0x1908B0u) { return; }
    }
    ctx->pc = 0x1908B0u;
label_1908b0:
    // 0x1908b0: 0xc0bd87c  jal         func_2F61F0
    ctx->pc = 0x1908B0u;
    SET_GPR_U32(ctx, 31, 0x1908B8u);
    ctx->pc = 0x1908B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908B0u;
            // 0x1908b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F61F0u;
    if (runtime->hasFunction(0x2F61F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F61F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908B8u; }
        if (ctx->pc != 0x1908B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSaveDataFv_0x2f61f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908B8u; }
        if (ctx->pc != 0x1908B8u) { return; }
    }
    ctx->pc = 0x1908B8u;
label_1908b8:
    // 0x1908b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1908b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1908bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1908BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1908C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1908BCu;
            // 0x1908c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1908C4u;
}
