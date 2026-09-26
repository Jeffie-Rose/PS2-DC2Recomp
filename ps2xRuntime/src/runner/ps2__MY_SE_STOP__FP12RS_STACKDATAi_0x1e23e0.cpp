#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MY_SE_STOP__FP12RS_STACKDATAi
// Address: 0x1e23e0 - 0x1e2414
void ps2__MY_SE_STOP__FP12RS_STACKDATAi_0x1e23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MY_SE_STOP__FP12RS_STACKDATAi_0x1e23e0");
#endif

    switch (ctx->pc) {
        case 0x1e23f0u: goto label_1e23f0;
        case 0x1e2404u: goto label_1e2404;
        default: break;
    }

    ctx->pc = 0x1e23e0u;

    // 0x1e23e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e23e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e23e8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E23E8u;
    SET_GPR_U32(ctx, 31, 0x1E23F0u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23F0u; }
        if (ctx->pc != 0x1E23F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E23F0u; }
        if (ctx->pc != 0x1E23F0u) { return; }
    }
    ctx->pc = 0x1E23F0u;
label_1e23f0:
    // 0x1e23f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e23f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e23f4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e23f8: 0x8c440588  lw          $a0, 0x588($v0)
    ctx->pc = 0x1e23f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x1e23fc: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x1E23FCu;
    SET_GPR_U32(ctx, 31, 0x1E2404u);
    ctx->pc = 0x1E2400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23FCu;
            // 0x1e2400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2404u; }
        if (ctx->pc != 0x1E2404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2404u; }
        if (ctx->pc != 0x1E2404u) { return; }
    }
    ctx->pc = 0x1E2404u;
label_1e2404:
    // 0x1e2404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e240c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E240Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E240Cu;
            // 0x1e2410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2414u;
}
