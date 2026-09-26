#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_RESET_DA_POSITION__FP12RS_STACKDATAi
// Address: 0x275560 - 0x27558c
void ps2__EOH_RESET_DA_POSITION__FP12RS_STACKDATAi_0x275560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_RESET_DA_POSITION__FP12RS_STACKDATAi_0x275560");
#endif

    switch (ctx->pc) {
        case 0x275570u: goto label_275570;
        case 0x275580u: goto label_275580;
        default: break;
    }

    ctx->pc = 0x275560u;

    // 0x275560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275568: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275568u;
    SET_GPR_U32(ctx, 31, 0x275570u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275570u; }
        if (ctx->pc != 0x275570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275570u; }
        if (ctx->pc != 0x275570u) { return; }
    }
    ctx->pc = 0x275570u;
label_275570:
    // 0x275570: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275578: 0xc097d64  jal         func_25F590
    ctx->pc = 0x275578u;
    SET_GPR_U32(ctx, 31, 0x275580u);
    ctx->pc = 0x27557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275578u;
            // 0x27557c: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F590u;
    if (runtime->hasFunction(0x25F590u)) {
        auto targetFn = runtime->lookupFunction(0x25F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275580u; }
        if (ctx->pc != 0x275580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__10CEohMotherFi_0x25f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275580u; }
        if (ctx->pc != 0x275580u) { return; }
    }
    ctx->pc = 0x275580u;
label_275580:
    // 0x275580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275584: 0x3e00008  jr          $ra
    ctx->pc = 0x275584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275584u;
            // 0x275588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27558Cu;
}
