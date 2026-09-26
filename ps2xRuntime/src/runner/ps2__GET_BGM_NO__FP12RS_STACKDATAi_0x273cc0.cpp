#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BGM_NO__FP12RS_STACKDATAi
// Address: 0x273cc0 - 0x273cf8
void ps2__GET_BGM_NO__FP12RS_STACKDATAi_0x273cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BGM_NO__FP12RS_STACKDATAi_0x273cc0");
#endif

    switch (ctx->pc) {
        case 0x273cd8u: goto label_273cd8;
        case 0x273ce4u: goto label_273ce4;
        default: break;
    }

    ctx->pc = 0x273cc0u;

    // 0x273cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cd0: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x273CD0u;
    SET_GPR_U32(ctx, 31, 0x273CD8u);
    ctx->pc = 0x273CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273CD0u;
            // 0x273cd4: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CD8u; }
        if (ctx->pc != 0x273CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CD8u; }
        if (ctx->pc != 0x273CD8u) { return; }
    }
    ctx->pc = 0x273CD8u;
label_273cd8:
    // 0x273cd8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x273cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x273cdc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x273CDCu;
    SET_GPR_U32(ctx, 31, 0x273CE4u);
    ctx->pc = 0x273CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273CDCu;
            // 0x273ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CE4u; }
        if (ctx->pc != 0x273CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CE4u; }
        if (ctx->pc != 0x273CE4u) { return; }
    }
    ctx->pc = 0x273CE4u;
label_273ce4:
    // 0x273ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x273CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CF0u;
            // 0x273cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273CF8u;
}
