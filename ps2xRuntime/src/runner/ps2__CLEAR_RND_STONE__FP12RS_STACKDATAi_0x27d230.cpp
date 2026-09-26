#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CLEAR_RND_STONE__FP12RS_STACKDATAi
// Address: 0x27d230 - 0x27d254
void ps2__CLEAR_RND_STONE__FP12RS_STACKDATAi_0x27d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CLEAR_RND_STONE__FP12RS_STACKDATAi_0x27d230");
#endif

    switch (ctx->pc) {
        case 0x27d244u: goto label_27d244;
        default: break;
    }

    ctx->pc = 0x27d230u;

    // 0x27d230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d234: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x27d234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x27d238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d23c: 0xc076528  jal         func_1D94A0
    ctx->pc = 0x27D23Cu;
    SET_GPR_U32(ctx, 31, 0x27D244u);
    ctx->pc = 0x27D240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D23Cu;
            // 0x27d240: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D94A0u;
    if (runtime->hasFunction(0x1D94A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D94A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D244u; }
        if (ctx->pc != 0x27D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearRandomStone__11CAutoMapGenFv_0x1d94a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D244u; }
        if (ctx->pc != 0x27D244u) { return; }
    }
    ctx->pc = 0x27D244u;
label_27d244:
    // 0x27d244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D24Cu;
            // 0x27d250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D254u;
}
