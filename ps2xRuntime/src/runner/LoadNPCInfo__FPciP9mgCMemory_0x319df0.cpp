#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadNPCInfo__FPciP9mgCMemory
// Address: 0x319df0 - 0x319e74
void LoadNPCInfo__FPciP9mgCMemory_0x319df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadNPCInfo__FPciP9mgCMemory_0x319df0");
#endif

    switch (ctx->pc) {
        case 0x319e38u: goto label_319e38;
        case 0x319e48u: goto label_319e48;
        case 0x319e58u: goto label_319e58;
        case 0x319e60u: goto label_319e60;
        default: break;
    }

    ctx->pc = 0x319df0u;

    // 0x319df0: 0x27bdc900  addiu       $sp, $sp, -0x3700
    ctx->pc = 0x319df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294953216));
    // 0x319df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x319df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x319df8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x319df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x319dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x319e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x319e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e08: 0xaf82a35c  sw          $v0, -0x5CA4($gp)
    ctx->pc = 0x319e08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943580), GPR_U32(ctx, 2));
    // 0x319e0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x319e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e10: 0x8f83a334  lw          $v1, -0x5CCC($gp)
    ctx->pc = 0x319e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943540)));
    // 0x319e14: 0x27a42830  addiu       $a0, $sp, 0x2830
    ctx->pc = 0x319e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
    // 0x319e18: 0x8f82a330  lw          $v0, -0x5CD0($gp)
    ctx->pc = 0x319e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943536)));
    // 0x319e1c: 0xaf86a344  sw          $a2, -0x5CBC($gp)
    ctx->pc = 0x319e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943556), GPR_U32(ctx, 6));
    // 0x319e20: 0xaf80a348  sw          $zero, -0x5CB8($gp)
    ctx->pc = 0x319e20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943560), GPR_U32(ctx, 0));
    // 0x319e24: 0xaf80a34c  sw          $zero, -0x5CB4($gp)
    ctx->pc = 0x319e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 0));
    // 0x319e28: 0xaf80a360  sw          $zero, -0x5CA0($gp)
    ctx->pc = 0x319e28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943584), GPR_U32(ctx, 0));
    // 0x319e2c: 0xaf83a364  sw          $v1, -0x5C9C($gp)
    ctx->pc = 0x319e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943588), GPR_U32(ctx, 3));
    // 0x319e30: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x319E30u;
    SET_GPR_U32(ctx, 31, 0x319E38u);
    ctx->pc = 0x319E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319E30u;
            // 0x319e34: 0xaf82a368  sw          $v0, -0x5C98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E38u; }
        if (ctx->pc != 0x319E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E38u; }
        if (ctx->pc != 0x319E38u) { return; }
    }
    ctx->pc = 0x319E38u;
label_319e38:
    // 0x319e38: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x319e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x319e3c: 0x27a42830  addiu       $a0, $sp, 0x2830
    ctx->pc = 0x319e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
    // 0x319e40: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x319E40u;
    SET_GPR_U32(ctx, 31, 0x319E48u);
    ctx->pc = 0x319E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319E40u;
            // 0x319e44: 0x24a5e7b0  addiu       $a1, $a1, -0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E48u; }
        if (ctx->pc != 0x319E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E48u; }
        if (ctx->pc != 0x319E48u) { return; }
    }
    ctx->pc = 0x319E48u;
label_319e48:
    // 0x319e48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x319e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e50: 0xc051a60  jal         func_146980
    ctx->pc = 0x319E50u;
    SET_GPR_U32(ctx, 31, 0x319E58u);
    ctx->pc = 0x319E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319E50u;
            // 0x319e54: 0x27a42830  addiu       $a0, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E58u; }
        if (ctx->pc != 0x319E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E58u; }
        if (ctx->pc != 0x319E58u) { return; }
    }
    ctx->pc = 0x319E58u;
label_319e58:
    // 0x319e58: 0xc0519c8  jal         func_146720
    ctx->pc = 0x319E58u;
    SET_GPR_U32(ctx, 31, 0x319E60u);
    ctx->pc = 0x319E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319E58u;
            // 0x319e5c: 0x27a42830  addiu       $a0, $sp, 0x2830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E60u; }
        if (ctx->pc != 0x319E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319E60u; }
        if (ctx->pc != 0x319E60u) { return; }
    }
    ctx->pc = 0x319E60u;
label_319e60:
    // 0x319e60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x319e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x319e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x319E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319E6Cu;
            // 0x319e70: 0x27bd3700  addiu       $sp, $sp, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 14080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319E74u;
}
