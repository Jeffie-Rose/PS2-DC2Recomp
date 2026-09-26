#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FORCE_BOOT_TOUR__FP12RS_STACKDATAi
// Address: 0x27db30 - 0x27db70
void ps2__FORCE_BOOT_TOUR__FP12RS_STACKDATAi_0x27db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FORCE_BOOT_TOUR__FP12RS_STACKDATAi_0x27db30");
#endif

    switch (ctx->pc) {
        case 0x27db40u: goto label_27db40;
        case 0x27db60u: goto label_27db60;
        default: break;
    }

    ctx->pc = 0x27db30u;

    // 0x27db30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27db34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27db38: 0xc064220  jal         func_190880
    ctx->pc = 0x27DB38u;
    SET_GPR_U32(ctx, 31, 0x27DB40u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB40u; }
        if (ctx->pc != 0x27DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB40u; }
        if (ctx->pc != 0x27DB40u) { return; }
    }
    ctx->pc = 0x27DB40u;
label_27db40:
    // 0x27db40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DB40u;
    {
        const bool branch_taken_0x27db40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db40) {
            ctx->pc = 0x27DB50u;
            goto label_27db50;
        }
    }
    ctx->pc = 0x27DB48u;
    // 0x27db48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27DB48u;
    {
        const bool branch_taken_0x27db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB48u;
            // 0x27db4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db48) {
            ctx->pc = 0x27DB64u;
            goto label_27db64;
        }
    }
    ctx->pc = 0x27DB50u;
label_27db50:
    // 0x27db50: 0x8c451a14  lw          $a1, 0x1A14($v0)
    ctx->pc = 0x27db50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
    // 0x27db54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27db54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db58: 0xc0bda08  jal         func_2F6820
    ctx->pc = 0x27DB58u;
    SET_GPR_U32(ctx, 31, 0x27DB60u);
    ctx->pc = 0x27DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB58u;
            // 0x27db5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6820u;
    if (runtime->hasFunction(0x2F6820u)) {
        auto targetFn = runtime->lookupFunction(0x2F6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB60u; }
        if (ctx->pc != 0x27DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ForceBootTour__9CSaveDataFii_0x2f6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB60u; }
        if (ctx->pc != 0x27DB60u) { return; }
    }
    ctx->pc = 0x27DB60u;
label_27db60:
    // 0x27db60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27db64:
    // 0x27db64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27db68: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB68u;
            // 0x27db6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27DB70u;
}
