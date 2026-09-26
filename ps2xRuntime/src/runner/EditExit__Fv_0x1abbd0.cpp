#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditExit__Fv
// Address: 0x1abbd0 - 0x1abc24
void EditExit__Fv_0x1abbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditExit__Fv_0x1abbd0");
#endif

    switch (ctx->pc) {
        case 0x1abbe0u: goto label_1abbe0;
        case 0x1abbe8u: goto label_1abbe8;
        case 0x1abbf0u: goto label_1abbf0;
        case 0x1abbf8u: goto label_1abbf8;
        case 0x1abc00u: goto label_1abc00;
        case 0x1abc08u: goto label_1abc08;
        case 0x1abc18u: goto label_1abc18;
        default: break;
    }

    ctx->pc = 0x1abbd0u;

    // 0x1abbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abbd8: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x1ABBD8u;
    SET_GPR_U32(ctx, 31, 0x1ABBE0u);
    ctx->pc = 0x1ABBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBD8u;
            // 0x1abbdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBE0u; }
        if (ctx->pc != 0x1ABBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBE0u; }
        if (ctx->pc != 0x1ABBE0u) { return; }
    }
    ctx->pc = 0x1ABBE0u;
label_1abbe0:
    // 0x1abbe0: 0xc0a9714  jal         func_2A5C50
    ctx->pc = 0x1ABBE0u;
    SET_GPR_U32(ctx, 31, 0x1ABBE8u);
    ctx->pc = 0x1ABBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBE0u;
            // 0x1abbe4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C50u;
    if (runtime->hasFunction(0x2A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBE8u; }
        if (ctx->pc != 0x1ABBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeSrc__6CSceneFv_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBE8u; }
        if (ctx->pc != 0x1ABBE8u) { return; }
    }
    ctx->pc = 0x1ABBE8u;
label_1abbe8:
    // 0x1abbe8: 0xc05188c  jal         func_146230
    ctx->pc = 0x1ABBE8u;
    SET_GPR_U32(ctx, 31, 0x1ABBF0u);
    ctx->pc = 0x146230u;
    if (runtime->hasFunction(0x146230u)) {
        auto targetFn = runtime->lookupFunction(0x146230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBF0u; }
        if (ctx->pc != 0x1ABBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCloseFont__Fv_0x146230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBF0u; }
        if (ctx->pc != 0x1ABBF0u) { return; }
    }
    ctx->pc = 0x1ABBF0u;
label_1abbf0:
    // 0x1abbf0: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x1ABBF0u;
    SET_GPR_U32(ctx, 31, 0x1ABBF8u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBF8u; }
        if (ctx->pc != 0x1ABBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBF8u; }
        if (ctx->pc != 0x1ABBF8u) { return; }
    }
    ctx->pc = 0x1ABBF8u;
label_1abbf8:
    // 0x1abbf8: 0xc0633f8  jal         func_18CFE0
    ctx->pc = 0x1ABBF8u;
    SET_GPR_U32(ctx, 31, 0x1ABC00u);
    ctx->pc = 0x1ABBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBF8u;
            // 0x1abbfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC00u; }
        if (ctx->pc != 0x1ABC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC00u; }
        if (ctx->pc != 0x1ABC00u) { return; }
    }
    ctx->pc = 0x1ABC00u;
label_1abc00:
    // 0x1abc00: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x1ABC00u;
    SET_GPR_U32(ctx, 31, 0x1ABC08u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC08u; }
        if (ctx->pc != 0x1ABC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC08u; }
        if (ctx->pc != 0x1ABC08u) { return; }
    }
    ctx->pc = 0x1ABC08u;
label_1abc08:
    // 0x1abc08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABC08u;
    {
        const bool branch_taken_0x1abc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abc08) {
            ctx->pc = 0x1ABC18u;
            goto label_1abc18;
        }
    }
    ctx->pc = 0x1ABC10u;
    // 0x1abc10: 0xc0c1090  jal         func_304240
    ctx->pc = 0x1ABC10u;
    SET_GPR_U32(ctx, 31, 0x1ABC18u);
    ctx->pc = 0x304240u;
    if (runtime->hasFunction(0x304240u)) {
        auto targetFn = runtime->lookupFunction(0x304240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC18u; }
        if (ctx->pc != 0x1ABC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitSubGame__Fv_0x304240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC18u; }
        if (ctx->pc != 0x1ABC18u) { return; }
    }
    ctx->pc = 0x1ABC18u;
label_1abc18:
    // 0x1abc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC1Cu;
            // 0x1abc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABC24u;
}
