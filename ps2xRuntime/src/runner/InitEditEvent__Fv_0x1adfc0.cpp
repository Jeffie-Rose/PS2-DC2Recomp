#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEditEvent__Fv
// Address: 0x1adfc0 - 0x1adfe8
void InitEditEvent__Fv_0x1adfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEditEvent__Fv_0x1adfc0");
#endif

    switch (ctx->pc) {
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1adfdcu: goto label_1adfdc;
        default: break;
    }

    ctx->pc = 0x1adfc0u;

    // 0x1adfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1adfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1adfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adfc8: 0xc06a6d4  jal         func_1A9B50
    ctx->pc = 0x1ADFC8u;
    SET_GPR_U32(ctx, 31, 0x1ADFD0u);
    ctx->pc = 0x1A9B50u;
    if (runtime->hasFunction(0x1A9B50u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFD0u; }
        if (ctx->pc != 0x1ADFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLockCharaCtrl__Fv_0x1a9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFD0u; }
        if (ctx->pc != 0x1ADFD0u) { return; }
    }
    ctx->pc = 0x1ADFD0u;
label_1adfd0:
    // 0x1adfd0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1adfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1adfd4: 0xc0bbe6c  jal         func_2EF9B0
    ctx->pc = 0x1ADFD4u;
    SET_GPR_U32(ctx, 31, 0x1ADFDCu);
    ctx->pc = 0x1ADFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFD4u;
            // 0x1adfd8: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9B0u;
    if (runtime->hasFunction(0x2EF9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFDCu; }
        if (ctx->pc != 0x1ADFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__10CEditEventFv_0x2ef9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFDCu; }
        if (ctx->pc != 0x1ADFDCu) { return; }
    }
    ctx->pc = 0x1ADFDCu;
label_1adfdc:
    // 0x1adfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFE0u;
            // 0x1adfe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADFE8u;
}
