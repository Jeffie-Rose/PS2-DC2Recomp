#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchBaseNo__16CEffectScriptManFPc
// Address: 0x2dff30 - 0x2dff94
void SearchBaseNo__16CEffectScriptManFPc_0x2dff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchBaseNo__16CEffectScriptManFPc_0x2dff30");
#endif

    switch (ctx->pc) {
        case 0x2dff48u: goto label_2dff48;
        case 0x2dff50u: goto label_2dff50;
        case 0x2dff68u: goto label_2dff68;
        default: break;
    }

    ctx->pc = 0x2dff30u;

    // 0x2dff30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dff34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dff38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dff3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dff40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dff40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dff48:
    // 0x2dff48: 0xc0b8b24  jal         func_2E2C90
    ctx->pc = 0x2DFF48u;
    SET_GPR_U32(ctx, 31, 0x2DFF50u);
    ctx->pc = 0x2DFF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF48u;
            // 0x2dff4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C90u;
    if (runtime->hasFunction(0x2E2C90u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF50u; }
        if (ctx->pc != 0x2DFF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffSptBaseDefPtr__Fi_0x2e2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF50u; }
        if (ctx->pc != 0x2DFF50u) { return; }
    }
    ctx->pc = 0x2DFF50u;
label_2dff50:
    // 0x2dff50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFF50u;
    {
        const bool branch_taken_0x2dff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF50u;
            // 0x2dff54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff50) {
            ctx->pc = 0x2DFF60u;
            goto label_2dff60;
        }
    }
    ctx->pc = 0x2DFF58u;
    // 0x2dff58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DFF58u;
    {
        const bool branch_taken_0x2dff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF58u;
            // 0x2dff5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff58) {
            ctx->pc = 0x2DFF80u;
            goto label_2dff80;
        }
    }
    ctx->pc = 0x2DFF60u;
label_2dff60:
    // 0x2dff60: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2DFF60u;
    SET_GPR_U32(ctx, 31, 0x2DFF68u);
    ctx->pc = 0x2DFF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF60u;
            // 0x2dff64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF68u; }
        if (ctx->pc != 0x2DFF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF68u; }
        if (ctx->pc != 0x2DFF68u) { return; }
    }
    ctx->pc = 0x2DFF68u;
label_2dff68:
    // 0x2dff68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFF68u;
    {
        const bool branch_taken_0x2dff68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF68u;
            // 0x2dff6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff68) {
            ctx->pc = 0x2DFF78u;
            goto label_2dff78;
        }
    }
    ctx->pc = 0x2DFF70u;
    // 0x2dff70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFF70u;
    {
        const bool branch_taken_0x2dff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dff70) {
            ctx->pc = 0x2DFF80u;
            goto label_2dff80;
        }
    }
    ctx->pc = 0x2DFF78u;
label_2dff78:
    // 0x2dff78: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2DFF78u;
    {
        const bool branch_taken_0x2dff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF78u;
            // 0x2dff7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff78) {
            ctx->pc = 0x2DFF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dff48;
        }
    }
    ctx->pc = 0x2DFF80u;
label_2dff80:
    // 0x2dff80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dff80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dff84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dff88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dff88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dff8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFF8Cu;
            // 0x2dff90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFF94u;
}
