#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PAUSE_ENABLE_FLAG__FP12RS_STACKDATAi
// Address: 0x27db00 - 0x27db28
void ps2__PAUSE_ENABLE_FLAG__FP12RS_STACKDATAi_0x27db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PAUSE_ENABLE_FLAG__FP12RS_STACKDATAi_0x27db00");
#endif

    switch (ctx->pc) {
        case 0x27db10u: goto label_27db10;
        case 0x27db18u: goto label_27db18;
        default: break;
    }

    ctx->pc = 0x27db00u;

    // 0x27db00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27db04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27db08: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27DB08u;
    SET_GPR_U32(ctx, 31, 0x27DB10u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB10u; }
        if (ctx->pc != 0x27DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB10u; }
        if (ctx->pc != 0x27DB10u) { return; }
    }
    ctx->pc = 0x27DB10u;
label_27db10:
    // 0x27db10: 0xc0c2720  jal         func_309C80
    ctx->pc = 0x27DB10u;
    SET_GPR_U32(ctx, 31, 0x27DB18u);
    ctx->pc = 0x27DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB10u;
            // 0x27db14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309C80u;
    if (runtime->hasFunction(0x309C80u)) {
        auto targetFn = runtime->lookupFunction(0x309C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB18u; }
        if (ctx->pc != 0x27DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseEnable__Fi_0x309c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB18u; }
        if (ctx->pc != 0x27DB18u) { return; }
    }
    ctx->pc = 0x27DB18u;
label_27db18:
    // 0x27db18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27db18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27db1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27db20: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB20u;
            // 0x27db24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27DB28u;
}
