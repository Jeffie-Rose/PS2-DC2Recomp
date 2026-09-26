#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ACTION_SETACTION__FP9SPI_STACKi
// Address: 0x252b80 - 0x252bc0
void ps2__MENU_ACTION_SETACTION__FP9SPI_STACKi_0x252b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ACTION_SETACTION__FP9SPI_STACKi_0x252b80");
#endif

    switch (ctx->pc) {
        case 0x252ba4u: goto label_252ba4;
        case 0x252bb0u: goto label_252bb0;
        default: break;
    }

    ctx->pc = 0x252b80u;

    // 0x252b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252b88: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252b8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252B8Cu;
    {
        const bool branch_taken_0x252b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B8Cu;
            // 0x252b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b8c) {
            ctx->pc = 0x252B9Cu;
            goto label_252b9c;
        }
    }
    ctx->pc = 0x252B94u;
    // 0x252b94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x252B94u;
    {
        const bool branch_taken_0x252b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B94u;
            // 0x252b98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b94) {
            ctx->pc = 0x252BB8u;
            goto label_252bb8;
        }
    }
    ctx->pc = 0x252B9Cu;
label_252b9c:
    // 0x252b9c: 0xc05191c  jal         func_146470
    ctx->pc = 0x252B9Cu;
    SET_GPR_U32(ctx, 31, 0x252BA4u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BA4u; }
        if (ctx->pc != 0x252BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BA4u; }
        if (ctx->pc != 0x252BA4u) { return; }
    }
    ctx->pc = 0x252BA4u;
label_252ba4:
    // 0x252ba4: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x252ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252ba8: 0xc08a240  jal         func_228900
    ctx->pc = 0x252BA8u;
    SET_GPR_U32(ctx, 31, 0x252BB0u);
    ctx->pc = 0x252BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252BA8u;
            // 0x252bac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BB0u; }
        if (ctx->pc != 0x252BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BB0u; }
        if (ctx->pc != 0x252BB0u) { return; }
    }
    ctx->pc = 0x252BB0u;
label_252bb0:
    // 0x252bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252bb8:
    // 0x252bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x252BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BB8u;
            // 0x252bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252BC0u;
}
