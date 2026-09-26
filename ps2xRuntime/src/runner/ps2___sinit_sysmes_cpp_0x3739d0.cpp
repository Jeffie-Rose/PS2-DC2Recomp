#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_sysmes.cpp
// Address: 0x3739d0 - 0x373a14
void ps2___sinit_sysmes_cpp_0x3739d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_sysmes_cpp_0x3739d0");
#endif

    switch (ctx->pc) {
        case 0x3739e4u: goto label_3739e4;
        case 0x3739f0u: goto label_3739f0;
        case 0x3739fcu: goto label_3739fc;
        case 0x373a08u: goto label_373a08;
        default: break;
    }

    ctx->pc = 0x3739d0u;

    // 0x3739d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3739d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3739d4: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x3739d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x3739d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3739d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3739dc: 0xc04e640  jal         func_139900
    ctx->pc = 0x3739DCu;
    SET_GPR_U32(ctx, 31, 0x3739E4u);
    ctx->pc = 0x3739E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3739DCu;
            // 0x3739e0: 0x24844210  addiu       $a0, $a0, 0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739E4u; }
        if (ctx->pc != 0x3739E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739E4u; }
        if (ctx->pc != 0x3739E4u) { return; }
    }
    ctx->pc = 0x3739E4u;
label_3739e4:
    // 0x3739e4: 0x3c0401e9  lui         $a0, 0x1E9
    ctx->pc = 0x3739e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)489 << 16));
    // 0x3739e8: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x3739E8u;
    SET_GPR_U32(ctx, 31, 0x3739F0u);
    ctx->pc = 0x3739ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3739E8u;
            // 0x3739ec: 0x24844ac0  addiu       $a0, $a0, 0x4AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739F0u; }
        if (ctx->pc != 0x3739F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739F0u; }
        if (ctx->pc != 0x3739F0u) { return; }
    }
    ctx->pc = 0x3739F0u;
label_3739f0:
    // 0x3739f0: 0x3c0401e9  lui         $a0, 0x1E9
    ctx->pc = 0x3739f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)489 << 16));
    // 0x3739f4: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x3739F4u;
    SET_GPR_U32(ctx, 31, 0x3739FCu);
    ctx->pc = 0x3739F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3739F4u;
            // 0x3739f8: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739FCu; }
        if (ctx->pc != 0x3739FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739FCu; }
        if (ctx->pc != 0x3739FCu) { return; }
    }
    ctx->pc = 0x3739FCu;
label_3739fc:
    // 0x3739fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x3739fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x373a00: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x373A00u;
    SET_GPR_U32(ctx, 31, 0x373A08u);
    ctx->pc = 0x373A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373A00u;
            // 0x373a04: 0x24848e80  addiu       $a0, $a0, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A08u; }
        if (ctx->pc != 0x373A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A08u; }
        if (ctx->pc != 0x373A08u) { return; }
    }
    ctx->pc = 0x373A08u;
label_373a08:
    // 0x373a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x373A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373A0Cu;
            // 0x373a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373A14u;
}
