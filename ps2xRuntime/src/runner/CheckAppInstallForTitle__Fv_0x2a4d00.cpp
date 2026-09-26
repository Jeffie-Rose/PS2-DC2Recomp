#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckAppInstallForTitle__Fv
// Address: 0x2a4d00 - 0x2a4d38
void CheckAppInstallForTitle__Fv_0x2a4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckAppInstallForTitle__Fv_0x2a4d00");
#endif

    switch (ctx->pc) {
        case 0x2a4d10u: goto label_2a4d10;
        case 0x2a4d2cu: goto label_2a4d2c;
        default: break;
    }

    ctx->pc = 0x2a4d00u;

    // 0x2a4d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4d08: 0xc052194  jal         func_148650
    ctx->pc = 0x2A4D08u;
    SET_GPR_U32(ctx, 31, 0x2A4D10u);
    ctx->pc = 0x148650u;
    if (runtime->hasFunction(0x148650u)) {
        auto targetFn = runtime->lookupFunction(0x148650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D10u; }
        if (ctx->pc != 0x2A4D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainFileDev__Fv_0x148650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D10u; }
        if (ctx->pc != 0x2A4D10u) { return; }
    }
    ctx->pc = 0x2A4D10u;
label_2a4d10:
    // 0x2a4d10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4d14: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4D14u;
    {
        const bool branch_taken_0x2a4d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A4D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D14u;
            // 0x2a4d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d14) {
            ctx->pc = 0x2A4D24u;
            goto label_2a4d24;
        }
    }
    ctx->pc = 0x2A4D1Cu;
    // 0x2a4d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4D1Cu;
    {
        const bool branch_taken_0x2a4d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D1Cu;
            // 0x2a4d20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d1c) {
            ctx->pc = 0x2A4D30u;
            goto label_2a4d30;
        }
    }
    ctx->pc = 0x2A4D24u;
label_2a4d24:
    // 0x2a4d24: 0xc0c6ef0  jal         func_31BBC0
    ctx->pc = 0x2A4D24u;
    SET_GPR_U32(ctx, 31, 0x2A4D2Cu);
    ctx->pc = 0x31BBC0u;
    if (runtime->hasFunction(0x31BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D2Cu; }
        if (ctx->pc != 0x2A4D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstall__Fv_0x31bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D2Cu; }
        if (ctx->pc != 0x2A4D2Cu) { return; }
    }
    ctx->pc = 0x2A4D2Cu;
label_2a4d2c:
    // 0x2a4d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4d30:
    // 0x2a4d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D30u;
            // 0x2a4d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4D38u;
}
