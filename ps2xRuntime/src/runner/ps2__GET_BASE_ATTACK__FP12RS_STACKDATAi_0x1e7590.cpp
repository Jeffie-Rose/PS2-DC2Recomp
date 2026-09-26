#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BASE_ATTACK__FP12RS_STACKDATAi
// Address: 0x1e7590 - 0x1e75b4
void ps2__GET_BASE_ATTACK__FP12RS_STACKDATAi_0x1e7590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BASE_ATTACK__FP12RS_STACKDATAi_0x1e7590");
#endif

    switch (ctx->pc) {
        case 0x1e75a4u: goto label_1e75a4;
        default: break;
    }

    ctx->pc = 0x1e7590u;

    // 0x1e7590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7598: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e7598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e759c: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E759Cu;
    SET_GPR_U32(ctx, 31, 0x1E75A4u);
    ctx->pc = 0x1E75A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E759Cu;
            // 0x1e75a0: 0x94451318  lhu         $a1, 0x1318($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75A4u; }
        if (ctx->pc != 0x1E75A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75A4u; }
        if (ctx->pc != 0x1E75A4u) { return; }
    }
    ctx->pc = 0x1E75A4u;
label_1e75a4:
    // 0x1e75a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e75a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e75ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E75ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E75B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75ACu;
            // 0x1e75b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E75B4u;
}
