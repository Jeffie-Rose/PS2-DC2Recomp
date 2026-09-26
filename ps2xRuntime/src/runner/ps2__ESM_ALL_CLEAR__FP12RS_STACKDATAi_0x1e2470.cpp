#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_ALL_CLEAR__FP12RS_STACKDATAi
// Address: 0x1e2470 - 0x1e24ac
void ps2__ESM_ALL_CLEAR__FP12RS_STACKDATAi_0x1e2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_ALL_CLEAR__FP12RS_STACKDATAi_0x1e2470");
#endif

    switch (ctx->pc) {
        case 0x1e2490u: goto label_1e2490;
        case 0x1e249cu: goto label_1e249c;
        default: break;
    }

    ctx->pc = 0x1e2470u;

    // 0x1e2470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2478: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2478u;
    {
        const bool branch_taken_0x1e2478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2478u;
            // 0x1e247c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2478) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E2480u;
    // 0x1e2480: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2480u;
    {
        const bool branch_taken_0x1e2480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2480u;
            // 0x1e2484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2480) {
            ctx->pc = 0x1E24A0u;
            goto label_1e24a0;
        }
    }
    ctx->pc = 0x1E2488u;
label_1e2488:
    // 0x1e2488: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2488u;
    SET_GPR_U32(ctx, 31, 0x1E2490u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2490u; }
        if (ctx->pc != 0x1E2490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2490u; }
        if (ctx->pc != 0x1E2490u) { return; }
    }
    ctx->pc = 0x1E2490u;
label_1e2490:
    // 0x1e2490: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1e2490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1e2494: 0xc0b84b4  jal         func_2E12D0
    ctx->pc = 0x1E2494u;
    SET_GPR_U32(ctx, 31, 0x1E249Cu);
    ctx->pc = 0x1E2498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2494u;
            // 0x1e2498: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E12D0u;
    if (runtime->hasFunction(0x2E12D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E12D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E249Cu; }
        if (ctx->pc != 0x1E249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEffectFromChrid__16CEffectScriptManFi_0x2e12d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E249Cu; }
        if (ctx->pc != 0x1E249Cu) { return; }
    }
    ctx->pc = 0x1E249Cu;
label_1e249c:
    // 0x1e249c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e24a0:
    // 0x1e24a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e24a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e24a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E24A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24A4u;
            // 0x1e24a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E24ACu;
}
