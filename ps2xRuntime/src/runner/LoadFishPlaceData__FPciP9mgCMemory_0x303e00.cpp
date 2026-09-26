#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFishPlaceData__FPciP9mgCMemory
// Address: 0x303e00 - 0x303e68
void LoadFishPlaceData__FPciP9mgCMemory_0x303e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFishPlaceData__FPciP9mgCMemory_0x303e00");
#endif

    switch (ctx->pc) {
        case 0x303e2cu: goto label_303e2c;
        case 0x303e3cu: goto label_303e3c;
        case 0x303e4cu: goto label_303e4c;
        case 0x303e54u: goto label_303e54;
        default: break;
    }

    ctx->pc = 0x303e00u;

    // 0x303e00: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x303e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x303e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e14: 0xaf86a0f8  sw          $a2, -0x5F08($gp)
    ctx->pc = 0x303e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 6));
    // 0x303e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x303e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303e20: 0xaf80a0f0  sw          $zero, -0x5F10($gp)
    ctx->pc = 0x303e20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942960), GPR_U32(ctx, 0));
    // 0x303e24: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x303E24u;
    SET_GPR_U32(ctx, 31, 0x303E2Cu);
    ctx->pc = 0x303E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E24u;
            // 0x303e28: 0xaf80a0f4  sw          $zero, -0x5F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E2Cu; }
        if (ctx->pc != 0x303E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E2Cu; }
        if (ctx->pc != 0x303E2Cu) { return; }
    }
    ctx->pc = 0x303E2Cu;
label_303e2c:
    // 0x303e2c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x303e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x303e30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x303e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303e34: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x303E34u;
    SET_GPR_U32(ctx, 31, 0x303E3Cu);
    ctx->pc = 0x303E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E34u;
            // 0x303e38: 0x24a5d980  addiu       $a1, $a1, -0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E3Cu; }
        if (ctx->pc != 0x303E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E3Cu; }
        if (ctx->pc != 0x303E3Cu) { return; }
    }
    ctx->pc = 0x303E3Cu;
label_303e3c:
    // 0x303e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x303e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e44: 0xc051a60  jal         func_146980
    ctx->pc = 0x303E44u;
    SET_GPR_U32(ctx, 31, 0x303E4Cu);
    ctx->pc = 0x303E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E44u;
            // 0x303e48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E4Cu; }
        if (ctx->pc != 0x303E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E4Cu; }
        if (ctx->pc != 0x303E4Cu) { return; }
    }
    ctx->pc = 0x303E4Cu;
label_303e4c:
    // 0x303e4c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x303E4Cu;
    SET_GPR_U32(ctx, 31, 0x303E54u);
    ctx->pc = 0x303E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E4Cu;
            // 0x303e50: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E54u; }
        if (ctx->pc != 0x303E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E54u; }
        if (ctx->pc != 0x303E54u) { return; }
    }
    ctx->pc = 0x303E54u;
label_303e54:
    // 0x303e54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303e60: 0x3e00008  jr          $ra
    ctx->pc = 0x303E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303E60u;
            // 0x303e64: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303E68u;
}
