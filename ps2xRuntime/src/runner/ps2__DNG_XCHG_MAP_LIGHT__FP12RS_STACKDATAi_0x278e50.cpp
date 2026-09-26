#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_XCHG_MAP_LIGHT__FP12RS_STACKDATAi
// Address: 0x278e50 - 0x278e70
void ps2__DNG_XCHG_MAP_LIGHT__FP12RS_STACKDATAi_0x278e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_XCHG_MAP_LIGHT__FP12RS_STACKDATAi_0x278e50");
#endif

    switch (ctx->pc) {
        case 0x278e60u: goto label_278e60;
        default: break;
    }

    ctx->pc = 0x278e50u;

    // 0x278e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278e58: 0xc0a3490  jal         func_28D240
    ctx->pc = 0x278E58u;
    SET_GPR_U32(ctx, 31, 0x278E60u);
    ctx->pc = 0x28D240u;
    if (runtime->hasFunction(0x28D240u)) {
        auto targetFn = runtime->lookupFunction(0x28D240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E60u; }
        if (ctx->pc != 0x278E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        XChgMapLighting__Fv_0x28d240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E60u; }
        if (ctx->pc != 0x278E60u) { return; }
    }
    ctx->pc = 0x278E60u;
label_278e60:
    // 0x278e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278e68: 0x3e00008  jr          $ra
    ctx->pc = 0x278E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E68u;
            // 0x278e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278E70u;
}
