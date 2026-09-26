#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgBreakFishing__Fv
// Address: 0x2fdc20 - 0x2fdc50
void sgBreakFishing__Fv_0x2fdc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgBreakFishing__Fv_0x2fdc20");
#endif

    switch (ctx->pc) {
        case 0x2fdc30u: goto label_2fdc30;
        case 0x2fdc38u: goto label_2fdc38;
        case 0x2fdc40u: goto label_2fdc40;
        default: break;
    }

    ctx->pc = 0x2fdc20u;

    // 0x2fdc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdc28: 0xc0bf420  jal         func_2FD080
    ctx->pc = 0x2FDC28u;
    SET_GPR_U32(ctx, 31, 0x2FDC30u);
    ctx->pc = 0x2FD080u;
    if (runtime->hasFunction(0x2FD080u)) {
        auto targetFn = runtime->lookupFunction(0x2FD080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC30u; }
        if (ctx->pc != 0x2FDC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteLoadThread__Fv_0x2fd080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC30u; }
        if (ctx->pc != 0x2FDC30u) { return; }
    }
    ctx->pc = 0x2FDC30u;
label_2fdc30:
    // 0x2fdc30: 0xc0c0fd0  jal         func_303F40
    ctx->pc = 0x2FDC30u;
    SET_GPR_U32(ctx, 31, 0x2FDC38u);
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC38u; }
        if (ctx->pc != 0x2FDC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC38u; }
        if (ctx->pc != 0x2FDC38u) { return; }
    }
    ctx->pc = 0x2FDC38u;
label_2fdc38:
    // 0x2fdc38: 0xc0bf714  jal         func_2FDC50
    ctx->pc = 0x2FDC38u;
    SET_GPR_U32(ctx, 31, 0x2FDC40u);
    ctx->pc = 0x2FDC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC38u;
            // 0x2fdc3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC50u;
    if (runtime->hasFunction(0x2FDC50u)) {
        auto targetFn = runtime->lookupFunction(0x2FDC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC40u; }
        if (ctx->pc != 0x2FDC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitFishing__FP11SubGameInfo_0x2fdc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC40u; }
        if (ctx->pc != 0x2FDC40u) { return; }
    }
    ctx->pc = 0x2FDC40u;
label_2fdc40:
    // 0x2fdc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdc44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fdc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdc48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC48u;
            // 0x2fdc4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDC50u;
}
