#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDngMapFloorInfo__16CDngFloorManagerFi
// Address: 0x2f9da0 - 0x2f9de4
void GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0");
#endif

    switch (ctx->pc) {
        case 0x2f9dc4u: goto label_2f9dc4;
        default: break;
    }

    ctx->pc = 0x2f9da0u;

    // 0x2f9da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9da8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9dac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9DACu;
    {
        const bool branch_taken_0x2f9dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DACu;
            // 0x2f9db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dac) {
            ctx->pc = 0x2F9DBCu;
            goto label_2f9dbc;
        }
    }
    ctx->pc = 0x2F9DB4u;
    // 0x2f9db4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9DB4u;
    {
        const bool branch_taken_0x2f9db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DB4u;
            // 0x2f9db8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9db4) {
            ctx->pc = 0x2F9DDCu;
            goto label_2f9ddc;
        }
    }
    ctx->pc = 0x2F9DBCu;
label_2f9dbc:
    // 0x2f9dbc: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2F9DBCu;
    SET_GPR_U32(ctx, 31, 0x2F9DC4u);
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DC4u; }
        if (ctx->pc != 0x2F9DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9DC4u; }
        if (ctx->pc != 0x2F9DC4u) { return; }
    }
    ctx->pc = 0x2F9DC4u;
label_2f9dc4:
    // 0x2f9dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9DC4u;
    {
        const bool branch_taken_0x2f9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9dc4) {
            ctx->pc = 0x2F9DD4u;
            goto label_2f9dd4;
        }
    }
    ctx->pc = 0x2F9DCCu;
    // 0x2f9dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9DCCu;
    {
        const bool branch_taken_0x2f9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DCCu;
            // 0x2f9dd0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dcc) {
            ctx->pc = 0x2F9DD8u;
            goto label_2f9dd8;
        }
    }
    ctx->pc = 0x2F9DD4u;
label_2f9dd4:
    // 0x2f9dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dd8:
    // 0x2f9dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9ddc:
    // 0x2f9ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9DDCu;
            // 0x2f9de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9DE4u;
}
