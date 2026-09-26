#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CLEAR_STACK__FP12RS_STACKDATAi
// Address: 0x263280 - 0x2632ac
void ps2__CLEAR_STACK__FP12RS_STACKDATAi_0x263280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CLEAR_STACK__FP12RS_STACKDATAi_0x263280");
#endif

    switch (ctx->pc) {
        case 0x263290u: goto label_263290;
        case 0x26329cu: goto label_26329c;
        default: break;
    }

    ctx->pc = 0x263280u;

    // 0x263280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263288: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263288u;
    SET_GPR_U32(ctx, 31, 0x263290u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263290u; }
        if (ctx->pc != 0x263290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263290u; }
        if (ctx->pc != 0x263290u) { return; }
    }
    ctx->pc = 0x263290u;
label_263290:
    // 0x263290: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x263290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263294: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x263294u;
    SET_GPR_U32(ctx, 31, 0x26329Cu);
    ctx->pc = 0x263298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263294u;
            // 0x263298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26329Cu; }
        if (ctx->pc != 0x26329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26329Cu; }
        if (ctx->pc != 0x26329Cu) { return; }
    }
    ctx->pc = 0x26329Cu;
label_26329c:
    // 0x26329c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26329cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2632a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2632a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2632a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2632A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2632A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632A4u;
            // 0x2632a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2632ACu;
}
