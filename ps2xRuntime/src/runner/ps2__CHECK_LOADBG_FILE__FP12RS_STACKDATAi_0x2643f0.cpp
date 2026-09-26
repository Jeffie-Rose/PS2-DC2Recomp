#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_LOADBG_FILE__FP12RS_STACKDATAi
// Address: 0x2643f0 - 0x264424
void ps2__CHECK_LOADBG_FILE__FP12RS_STACKDATAi_0x2643f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_LOADBG_FILE__FP12RS_STACKDATAi_0x2643f0");
#endif

    switch (ctx->pc) {
        case 0x264404u: goto label_264404;
        case 0x264410u: goto label_264410;
        default: break;
    }

    ctx->pc = 0x2643f0u;

    // 0x2643f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2643f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2643f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2643f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2643f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2643f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2643fc: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2643FCu;
    SET_GPR_U32(ctx, 31, 0x264404u);
    ctx->pc = 0x264400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2643FCu;
            // 0x264400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264404u; }
        if (ctx->pc != 0x264404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264404u; }
        if (ctx->pc != 0x264404u) { return; }
    }
    ctx->pc = 0x264404u;
label_264404:
    // 0x264404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264408: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x264408u;
    SET_GPR_U32(ctx, 31, 0x264410u);
    ctx->pc = 0x26440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264408u;
            // 0x26440c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264410u; }
        if (ctx->pc != 0x264410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264410u; }
        if (ctx->pc != 0x264410u) { return; }
    }
    ctx->pc = 0x264410u;
label_264410:
    // 0x264410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26441c: 0x3e00008  jr          $ra
    ctx->pc = 0x26441Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26441Cu;
            // 0x264420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264424u;
}
