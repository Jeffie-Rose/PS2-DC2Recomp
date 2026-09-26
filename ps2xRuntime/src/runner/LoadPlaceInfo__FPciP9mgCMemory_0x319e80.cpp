#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadPlaceInfo__FPciP9mgCMemory
// Address: 0x319e80 - 0x319ee4
void LoadPlaceInfo__FPciP9mgCMemory_0x319e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPlaceInfo__FPciP9mgCMemory_0x319e80");
#endif

    switch (ctx->pc) {
        case 0x319ea8u: goto label_319ea8;
        case 0x319eb8u: goto label_319eb8;
        case 0x319ec8u: goto label_319ec8;
        case 0x319ed0u: goto label_319ed0;
        default: break;
    }

    ctx->pc = 0x319e80u;

    // 0x319e80: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x319e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x319e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x319e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x319e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x319e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x319e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x319e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e94: 0xaf86a370  sw          $a2, -0x5C90($gp)
    ctx->pc = 0x319e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943600), GPR_U32(ctx, 6));
    // 0x319e98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x319e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x319e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319ea0: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x319EA0u;
    SET_GPR_U32(ctx, 31, 0x319EA8u);
    ctx->pc = 0x319EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319EA0u;
            // 0x319ea4: 0xaf80a374  sw          $zero, -0x5C8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319EA8u; }
        if (ctx->pc != 0x319EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319EA8u; }
        if (ctx->pc != 0x319EA8u) { return; }
    }
    ctx->pc = 0x319EA8u;
label_319ea8:
    // 0x319ea8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x319ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x319eac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x319eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319eb0: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x319EB0u;
    SET_GPR_U32(ctx, 31, 0x319EB8u);
    ctx->pc = 0x319EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319EB0u;
            // 0x319eb4: 0x24a5e800  addiu       $a1, $a1, -0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319EB8u; }
        if (ctx->pc != 0x319EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319EB8u; }
        if (ctx->pc != 0x319EB8u) { return; }
    }
    ctx->pc = 0x319EB8u;
label_319eb8:
    // 0x319eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x319eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ebc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ec0: 0xc051a60  jal         func_146980
    ctx->pc = 0x319EC0u;
    SET_GPR_U32(ctx, 31, 0x319EC8u);
    ctx->pc = 0x319EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319EC0u;
            // 0x319ec4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319EC8u; }
        if (ctx->pc != 0x319EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319EC8u; }
        if (ctx->pc != 0x319EC8u) { return; }
    }
    ctx->pc = 0x319EC8u;
label_319ec8:
    // 0x319ec8: 0xc0519c8  jal         func_146720
    ctx->pc = 0x319EC8u;
    SET_GPR_U32(ctx, 31, 0x319ED0u);
    ctx->pc = 0x319ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319EC8u;
            // 0x319ecc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319ED0u; }
        if (ctx->pc != 0x319ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319ED0u; }
        if (ctx->pc != 0x319ED0u) { return; }
    }
    ctx->pc = 0x319ED0u;
label_319ed0:
    // 0x319ed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x319ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x319ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319edc: 0x3e00008  jr          $ra
    ctx->pc = 0x319EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319EDCu;
            // 0x319ee0: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319EE4u;
}
