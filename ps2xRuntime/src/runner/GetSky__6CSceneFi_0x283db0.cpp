#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSky__6CSceneFi
// Address: 0x283db0 - 0x283e00
void GetSky__6CSceneFi_0x283db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSky__6CSceneFi_0x283db0");
#endif

    switch (ctx->pc) {
        case 0x283dc0u: goto label_283dc0;
        default: break;
    }

    ctx->pc = 0x283db0u;

    // 0x283db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283db8: 0xc0a0d10  jal         func_283440
    ctx->pc = 0x283DB8u;
    SET_GPR_U32(ctx, 31, 0x283DC0u);
    ctx->pc = 0x283440u;
    if (runtime->hasFunction(0x283440u)) {
        auto targetFn = runtime->lookupFunction(0x283440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283DC0u; }
        if (ctx->pc != 0x283DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneSky__6CSceneFi_0x283440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283DC0u; }
        if (ctx->pc != 0x283DC0u) { return; }
    }
    ctx->pc = 0x283DC0u;
label_283dc0:
    // 0x283dc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283DC0u;
    {
        const bool branch_taken_0x283dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283dc0) {
            ctx->pc = 0x283DD0u;
            goto label_283dd0;
        }
    }
    ctx->pc = 0x283DC8u;
    // 0x283dc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283DC8u;
    {
        const bool branch_taken_0x283dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DC8u;
            // 0x283dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dc8) {
            ctx->pc = 0x283DF4u;
            goto label_283df4;
        }
    }
    ctx->pc = 0x283DD0u;
label_283dd0:
    // 0x283dd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283dd4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x283dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x283dd8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x283dd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283ddc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283DDCu;
    {
        const bool branch_taken_0x283ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ddc) {
            ctx->pc = 0x283DECu;
            goto label_283dec;
        }
    }
    ctx->pc = 0x283DE4u;
    // 0x283de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283DE4u;
    {
        const bool branch_taken_0x283de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DE4u;
            // 0x283de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283de4) {
            ctx->pc = 0x283DF4u;
            goto label_283df4;
        }
    }
    ctx->pc = 0x283DECu;
label_283dec:
    // 0x283dec: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x283decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x283df0: 0x0  nop
    ctx->pc = 0x283df0u;
    // NOP
label_283df4:
    // 0x283df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283df8: 0x3e00008  jr          $ra
    ctx->pc = 0x283DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DF8u;
            // 0x283dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283E00u;
}
