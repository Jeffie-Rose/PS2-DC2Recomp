#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreExitLoop__FP6CScene
// Address: 0x1a9ed0 - 0x1a9f40
void PreExitLoop__FP6CScene_0x1a9ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreExitLoop__FP6CScene_0x1a9ed0");
#endif

    switch (ctx->pc) {
        case 0x1a9ee4u: goto label_1a9ee4;
        case 0x1a9eecu: goto label_1a9eec;
        case 0x1a9ef4u: goto label_1a9ef4;
        case 0x1a9f00u: goto label_1a9f00;
        case 0x1a9f08u: goto label_1a9f08;
        case 0x1a9f10u: goto label_1a9f10;
        case 0x1a9f18u: goto label_1a9f18;
        case 0x1a9f20u: goto label_1a9f20;
        case 0x1a9f28u: goto label_1a9f28;
        case 0x1a9f30u: goto label_1a9f30;
        default: break;
    }

    ctx->pc = 0x1a9ed0u;

    // 0x1a9ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a9ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9edc: 0xc06bc94  jal         func_1AF250
    ctx->pc = 0x1A9EDCu;
    SET_GPR_U32(ctx, 31, 0x1A9EE4u);
    ctx->pc = 0x1A9EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EDCu;
            // 0x1a9ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF250u;
    if (runtime->hasFunction(0x1AF250u)) {
        auto targetFn = runtime->lookupFunction(0x1AF250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EE4u; }
        if (ctx->pc != 0x1A9EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BurnEditParts__Fv_0x1af250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EE4u; }
        if (ctx->pc != 0x1A9EE4u) { return; }
    }
    ctx->pc = 0x1A9EE4u;
label_1a9ee4:
    // 0x1a9ee4: 0xc06bf8c  jal         func_1AFE30
    ctx->pc = 0x1A9EE4u;
    SET_GPR_U32(ctx, 31, 0x1A9EECu);
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EECu; }
        if (ctx->pc != 0x1A9EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EECu; }
        if (ctx->pc != 0x1A9EECu) { return; }
    }
    ctx->pc = 0x1A9EECu;
label_1a9eec:
    // 0x1a9eec: 0xc0c10d4  jal         func_304350
    ctx->pc = 0x1A9EECu;
    SET_GPR_U32(ctx, 31, 0x1A9EF4u);
    ctx->pc = 0x304350u;
    if (runtime->hasFunction(0x304350u)) {
        auto targetFn = runtime->lookupFunction(0x304350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EF4u; }
        if (ctx->pc != 0x1A9EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgBreakSubGame__Fv_0x304350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9EF4u; }
        if (ctx->pc != 0x1A9EF4u) { return; }
    }
    ctx->pc = 0x1A9EF4u;
label_1a9ef4:
    // 0x1a9ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ef8: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x1A9EF8u;
    SET_GPR_U32(ctx, 31, 0x1A9F00u);
    ctx->pc = 0x1A9EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9EF8u;
            // 0x1a9efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F00u; }
        if (ctx->pc != 0x1A9F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F00u; }
        if (ctx->pc != 0x1A9F00u) { return; }
    }
    ctx->pc = 0x1A9F00u;
label_1a9f00:
    // 0x1a9f00: 0xc0a9700  jal         func_2A5C00
    ctx->pc = 0x1A9F00u;
    SET_GPR_U32(ctx, 31, 0x1A9F08u);
    ctx->pc = 0x1A9F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F00u;
            // 0x1a9f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F08u; }
        if (ctx->pc != 0x1A9F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F08u; }
        if (ctx->pc != 0x1A9F08u) { return; }
    }
    ctx->pc = 0x1A9F08u;
label_1a9f08:
    // 0x1a9f08: 0xc0a97f8  jal         func_2A5FE0
    ctx->pc = 0x1A9F08u;
    SET_GPR_U32(ctx, 31, 0x1A9F10u);
    ctx->pc = 0x1A9F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F08u;
            // 0x1a9f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FE0u;
    if (runtime->hasFunction(0x2A5FE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F10u; }
        if (ctx->pc != 0x1A9F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeAllStop__6CSceneFv_0x2a5fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F10u; }
        if (ctx->pc != 0x1A9F10u) { return; }
    }
    ctx->pc = 0x1A9F10u;
label_1a9f10:
    // 0x1a9f10: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x1A9F10u;
    SET_GPR_U32(ctx, 31, 0x1A9F18u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F18u; }
        if (ctx->pc != 0x1A9F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F18u; }
        if (ctx->pc != 0x1A9F18u) { return; }
    }
    ctx->pc = 0x1A9F18u;
label_1a9f18:
    // 0x1a9f18: 0xc0633f8  jal         func_18CFE0
    ctx->pc = 0x1A9F18u;
    SET_GPR_U32(ctx, 31, 0x1A9F20u);
    ctx->pc = 0x1A9F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F18u;
            // 0x1a9f1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F20u; }
        if (ctx->pc != 0x1A9F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F20u; }
        if (ctx->pc != 0x1A9F20u) { return; }
    }
    ctx->pc = 0x1A9F20u;
label_1a9f20:
    // 0x1a9f20: 0xc0953d8  jal         func_254F60
    ctx->pc = 0x1A9F20u;
    SET_GPR_U32(ctx, 31, 0x1A9F28u);
    ctx->pc = 0x254F60u;
    if (runtime->hasFunction(0x254F60u)) {
        auto targetFn = runtime->lookupFunction(0x254F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F28u; }
        if (ctx->pc != 0x1A9F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetNpcTalkMes__Fv_0x254f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F28u; }
        if (ctx->pc != 0x1A9F28u) { return; }
    }
    ctx->pc = 0x1A9F28u;
label_1a9f28:
    // 0x1a9f28: 0xc098a1c  jal         func_262870
    ctx->pc = 0x1A9F28u;
    SET_GPR_U32(ctx, 31, 0x1A9F30u);
    ctx->pc = 0x262870u;
    if (runtime->hasFunction(0x262870u)) {
        auto targetFn = runtime->lookupFunction(0x262870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F30u; }
        if (ctx->pc != 0x1A9F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventTermination__Fv_0x262870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F30u; }
        if (ctx->pc != 0x1A9F30u) { return; }
    }
    ctx->pc = 0x1A9F30u;
label_1a9f30:
    // 0x1a9f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F38u;
            // 0x1a9f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9F40u;
}
