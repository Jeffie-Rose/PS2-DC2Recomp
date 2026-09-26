#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_editctrl.cpp
// Address: 0x373a30 - 0x373a6c
void ps2___sinit_editctrl_cpp_0x373a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_editctrl_cpp_0x373a30");
#endif

    switch (ctx->pc) {
        case 0x373a4cu: goto label_373a4c;
        case 0x373a60u: goto label_373a60;
        default: break;
    }

    ctx->pc = 0x373a30u;

    // 0x373a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373a34: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x373a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373a3c: 0x2484b1c0  addiu       $a0, $a0, -0x4E40
    ctx->pc = 0x373a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947264));
    // 0x373a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a44: 0xc049c86  jal         func_127218
    ctx->pc = 0x373A44u;
    SET_GPR_U32(ctx, 31, 0x373A4Cu);
    ctx->pc = 0x373A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373A44u;
            // 0x373a48: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A4Cu; }
        if (ctx->pc != 0x373A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A4Cu; }
        if (ctx->pc != 0x373A4Cu) { return; }
    }
    ctx->pc = 0x373A4Cu;
label_373a4c:
    // 0x373a4c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x373a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a54: 0x2484b2f0  addiu       $a0, $a0, -0x4D10
    ctx->pc = 0x373a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947568));
    // 0x373a58: 0xc049c86  jal         func_127218
    ctx->pc = 0x373A58u;
    SET_GPR_U32(ctx, 31, 0x373A60u);
    ctx->pc = 0x373A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373A58u;
            // 0x373a5c: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A60u; }
        if (ctx->pc != 0x373A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373A60u; }
        if (ctx->pc != 0x373A60u) { return; }
    }
    ctx->pc = 0x373A60u;
label_373a60:
    // 0x373a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a64: 0x3e00008  jr          $ra
    ctx->pc = 0x373A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373A64u;
            // 0x373a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373A6Cu;
}
