#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowTimeBand__4CMapFv
// Address: 0x160d70 - 0x160d94
void GetNowTimeBand__4CMapFv_0x160d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowTimeBand__4CMapFv_0x160d70");
#endif

    switch (ctx->pc) {
        case 0x160d80u: goto label_160d80;
        case 0x160d88u: goto label_160d88;
        default: break;
    }

    ctx->pc = 0x160d70u;

    // 0x160d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160d78: 0xc05834c  jal         func_160D30
    ctx->pc = 0x160D78u;
    SET_GPR_U32(ctx, 31, 0x160D80u);
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D80u; }
        if (ctx->pc != 0x160D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D80u; }
        if (ctx->pc != 0x160D80u) { return; }
    }
    ctx->pc = 0x160D80u;
label_160d80:
    // 0x160d80: 0xc05831c  jal         func_160C70
    ctx->pc = 0x160D80u;
    SET_GPR_U32(ctx, 31, 0x160D88u);
    ctx->pc = 0x160D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D80u;
            // 0x160d84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D88u; }
        if (ctx->pc != 0x160D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D88u; }
        if (ctx->pc != 0x160D88u) { return; }
    }
    ctx->pc = 0x160D88u;
label_160d88:
    // 0x160d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x160D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D8Cu;
            // 0x160d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160D94u;
}
