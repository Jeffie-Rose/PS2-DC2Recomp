#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteMdsList__11CMdsListSetFPc
// Address: 0x168df0 - 0x168e2c
void DeleteMdsList__11CMdsListSetFPc_0x168df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteMdsList__11CMdsListSetFPc_0x168df0");
#endif

    switch (ctx->pc) {
        case 0x168e00u: goto label_168e00;
        default: break;
    }

    ctx->pc = 0x168df0u;

    // 0x168df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168df8: 0xc05a2e0  jal         func_168B80
    ctx->pc = 0x168DF8u;
    SET_GPR_U32(ctx, 31, 0x168E00u);
    ctx->pc = 0x168B80u;
    if (runtime->hasFunction(0x168B80u)) {
        auto targetFn = runtime->lookupFunction(0x168B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E00u; }
        if (ctx->pc != 0x168E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMdsList__11CMdsListSetFPc_0x168b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E00u; }
        if (ctx->pc != 0x168E00u) { return; }
    }
    ctx->pc = 0x168E00u;
label_168e00:
    // 0x168e00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E00u;
    {
        const bool branch_taken_0x168e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e00) {
            ctx->pc = 0x168E10u;
            goto label_168e10;
        }
    }
    ctx->pc = 0x168E08u;
    // 0x168e08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168E08u;
    {
        const bool branch_taken_0x168e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E08u;
            // 0x168e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e08) {
            ctx->pc = 0x168E20u;
            goto label_168e20;
        }
    }
    ctx->pc = 0x168E10u;
label_168e10:
    // 0x168e10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x168e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x168e14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x168e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x168e18: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x168e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x168e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168e20:
    // 0x168e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168e24: 0x3e00008  jr          $ra
    ctx->pc = 0x168E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E24u;
            // 0x168e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168E2Cu;
}
