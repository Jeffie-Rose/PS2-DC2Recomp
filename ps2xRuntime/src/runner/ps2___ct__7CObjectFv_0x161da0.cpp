#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__7CObjectFv
// Address: 0x161da0 - 0x161de4
void ps2___ct__7CObjectFv_0x161da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__7CObjectFv_0x161da0");
#endif

    switch (ctx->pc) {
        case 0x161da0u: goto label_161da0;
        case 0x161da4u: goto label_161da4;
        case 0x161da8u: goto label_161da8;
        case 0x161dacu: goto label_161dac;
        case 0x161db0u: goto label_161db0;
        case 0x161db4u: goto label_161db4;
        case 0x161db8u: goto label_161db8;
        case 0x161dbcu: goto label_161dbc;
        case 0x161dc0u: goto label_161dc0;
        case 0x161dc4u: goto label_161dc4;
        case 0x161dc8u: goto label_161dc8;
        case 0x161dccu: goto label_161dcc;
        case 0x161dd0u: goto label_161dd0;
        case 0x161dd4u: goto label_161dd4;
        case 0x161dd8u: goto label_161dd8;
        case 0x161ddcu: goto label_161ddc;
        case 0x161de0u: goto label_161de0;
        default: break;
    }

    ctx->pc = 0x161da0u;

label_161da0:
    // 0x161da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_161da4:
    // 0x161da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_161da8:
    // 0x161da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_161dac:
    // 0x161dac: 0xc05877c  jal         func_161DF0
label_161db0:
    if (ctx->pc == 0x161DB0u) {
        ctx->pc = 0x161DB0u;
            // 0x161db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161DB4u;
        goto label_161db4;
    }
    ctx->pc = 0x161DACu;
    SET_GPR_U32(ctx, 31, 0x161DB4u);
    ctx->pc = 0x161DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DACu;
            // 0x161db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DF0u;
    if (runtime->hasFunction(0x161DF0u)) {
        auto targetFn = runtime->lookupFunction(0x161DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DB4u; }
        if (ctx->pc != 0x161DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9mgCObjectFv_0x161df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DB4u; }
        if (ctx->pc != 0x161DB4u) { return; }
    }
    ctx->pc = 0x161DB4u;
label_161db4:
    // 0x161db4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_161db8:
    // 0x161db8: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x161db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_161dbc:
    // 0x161dbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x161dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_161dc0:
    // 0x161dc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x161dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_161dc4:
    // 0x161dc4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_161dc8:
    // 0x161dc8: 0x320f809  jalr        $t9
label_161dcc:
    if (ctx->pc == 0x161DCCu) {
        ctx->pc = 0x161DCCu;
            // 0x161dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161DD0u;
        goto label_161dd0;
    }
    ctx->pc = 0x161DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x161DD0u);
        ctx->pc = 0x161DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161DC8u;
            // 0x161dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161DD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161DD0u; }
            if (ctx->pc != 0x161DD0u) { return; }
        }
        }
    }
    ctx->pc = 0x161DD0u;
label_161dd0:
    // 0x161dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161dd4:
    // 0x161dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161dd8:
    // 0x161dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_161ddc:
    // 0x161ddc: 0x3e00008  jr          $ra
label_161de0:
    if (ctx->pc == 0x161DE0u) {
        ctx->pc = 0x161DE0u;
            // 0x161de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x161DE4u;
        goto label_fallthrough_0x161ddc;
    }
    ctx->pc = 0x161DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161DDCu;
            // 0x161de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x161ddc:
    ctx->pc = 0x161DE4u;
}
