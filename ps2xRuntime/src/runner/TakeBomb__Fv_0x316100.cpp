#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TakeBomb__Fv
// Address: 0x316100 - 0x316134
void TakeBomb__Fv_0x316100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TakeBomb__Fv_0x316100");
#endif

    switch (ctx->pc) {
        case 0x316110u: goto label_316110;
        default: break;
    }

    ctx->pc = 0x316100u;

    // 0x316100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316108: 0xc0c5838  jal         func_3160E0
    ctx->pc = 0x316108u;
    SET_GPR_U32(ctx, 31, 0x316110u);
    ctx->pc = 0x3160E0u;
    if (runtime->hasFunction(0x3160E0u)) {
        auto targetFn = runtime->lookupFunction(0x3160E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316110u; }
        if (ctx->pc != 0x316110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TakeBombCheck__Fv_0x3160e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316110u; }
        if (ctx->pc != 0x316110u) { return; }
    }
    ctx->pc = 0x316110u;
label_316110:
    // 0x316110: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x316110u;
    {
        const bool branch_taken_0x316110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316110u;
            // 0x316114: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316110) {
            ctx->pc = 0x316120u;
            goto label_316120;
        }
    }
    ctx->pc = 0x316118u;
    // 0x316118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316118u;
    {
        const bool branch_taken_0x316118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316118u;
            // 0x31611c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316118) {
            ctx->pc = 0x316128u;
            goto label_316128;
        }
    }
    ctx->pc = 0x316120u;
label_316120:
    // 0x316120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316124: 0xaf83a308  sw          $v1, -0x5CF8($gp)
    ctx->pc = 0x316124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943496), GPR_U32(ctx, 3));
label_316128:
    // 0x316128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31612c: 0x3e00008  jr          $ra
    ctx->pc = 0x31612Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31612Cu;
            // 0x316130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316134u;
}
