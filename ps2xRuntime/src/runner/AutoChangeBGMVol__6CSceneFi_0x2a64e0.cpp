#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoChangeBGMVol__6CSceneFi
// Address: 0x2a64e0 - 0x2a6508
void AutoChangeBGMVol__6CSceneFi_0x2a64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoChangeBGMVol__6CSceneFi_0x2a64e0");
#endif

    switch (ctx->pc) {
        case 0x2a64f4u: goto label_2a64f4;
        default: break;
    }

    ctx->pc = 0x2a64e0u;

    // 0x2a64e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a64e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a64e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a64e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a64e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a64ec: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A64ECu;
    SET_GPR_U32(ctx, 31, 0x2A64F4u);
    ctx->pc = 0x2A64F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64ECu;
            // 0x2a64f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64F4u; }
        if (ctx->pc != 0x2A64F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64F4u; }
        if (ctx->pc != 0x2A64F4u) { return; }
    }
    ctx->pc = 0x2A64F4u;
label_2a64f4:
    // 0x2a64f4: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x2a64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
    // 0x2a64f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a64f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a64fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a64fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6500: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6500u;
            // 0x2a6504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6508u;
}
