#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadCfg__13CQuestManagerFP9mgCMemoryPci
// Address: 0x31a9c0 - 0x31aa24
void LoadCfg__13CQuestManagerFP9mgCMemoryPci_0x31a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadCfg__13CQuestManagerFP9mgCMemoryPci_0x31a9c0");
#endif

    switch (ctx->pc) {
        case 0x31a9e8u: goto label_31a9e8;
        case 0x31a9f8u: goto label_31a9f8;
        case 0x31aa08u: goto label_31aa08;
        case 0x31aa10u: goto label_31aa10;
        default: break;
    }

    ctx->pc = 0x31a9c0u;

    // 0x31a9c0: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x31a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x31a9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31a9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a9d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31a9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9d4: 0xaf84a380  sw          $a0, -0x5C80($gp)
    ctx->pc = 0x31a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943616), GPR_U32(ctx, 4));
    // 0x31a9d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x31a9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9dc: 0xaf85a384  sw          $a1, -0x5C7C($gp)
    ctx->pc = 0x31a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943620), GPR_U32(ctx, 5));
    // 0x31a9e0: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x31A9E0u;
    SET_GPR_U32(ctx, 31, 0x31A9E8u);
    ctx->pc = 0x31A9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A9E0u;
            // 0x31a9e4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A9E8u; }
        if (ctx->pc != 0x31A9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A9E8u; }
        if (ctx->pc != 0x31A9E8u) { return; }
    }
    ctx->pc = 0x31A9E8u;
label_31a9e8:
    // 0x31a9e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x31a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x31a9ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a9f0: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x31A9F0u;
    SET_GPR_U32(ctx, 31, 0x31A9F8u);
    ctx->pc = 0x31A9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A9F0u;
            // 0x31a9f4: 0x24a5e870  addiu       $a1, $a1, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A9F8u; }
        if (ctx->pc != 0x31A9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A9F8u; }
        if (ctx->pc != 0x31A9F8u) { return; }
    }
    ctx->pc = 0x31A9F8u;
label_31a9f8:
    // 0x31a9f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31a9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31a9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa00: 0xc051a60  jal         func_146980
    ctx->pc = 0x31AA00u;
    SET_GPR_U32(ctx, 31, 0x31AA08u);
    ctx->pc = 0x31AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AA00u;
            // 0x31aa04: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AA08u; }
        if (ctx->pc != 0x31AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AA08u; }
        if (ctx->pc != 0x31AA08u) { return; }
    }
    ctx->pc = 0x31AA08u;
label_31aa08:
    // 0x31aa08: 0xc0519c8  jal         func_146720
    ctx->pc = 0x31AA08u;
    SET_GPR_U32(ctx, 31, 0x31AA10u);
    ctx->pc = 0x31AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AA08u;
            // 0x31aa0c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AA10u; }
        if (ctx->pc != 0x31AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AA10u; }
        if (ctx->pc != 0x31AA10u) { return; }
    }
    ctx->pc = 0x31AA10u;
label_31aa10:
    // 0x31aa10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31aa14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31aa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aa18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31aa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AA1Cu;
            // 0x31aa20: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AA24u;
}
