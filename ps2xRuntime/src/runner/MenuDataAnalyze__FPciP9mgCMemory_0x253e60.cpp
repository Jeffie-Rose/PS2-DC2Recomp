#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuDataAnalyze__FPciP9mgCMemory
// Address: 0x253e60 - 0x253ed0
void MenuDataAnalyze__FPciP9mgCMemory_0x253e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuDataAnalyze__FPciP9mgCMemory_0x253e60");
#endif

    switch (ctx->pc) {
        case 0x253e90u: goto label_253e90;
        case 0x253ea0u: goto label_253ea0;
        case 0x253eb0u: goto label_253eb0;
        case 0x253eb8u: goto label_253eb8;
        default: break;
    }

    ctx->pc = 0x253e60u;

    // 0x253e60: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x253e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x253e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e74: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253E74u;
    {
        const bool branch_taken_0x253e74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x253E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253E74u;
            // 0x253e78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e74) {
            ctx->pc = 0x253E84u;
            goto label_253e84;
        }
    }
    ctx->pc = 0x253E7Cu;
    // 0x253e7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x253E7Cu;
    {
        const bool branch_taken_0x253e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253E7Cu;
            // 0x253e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e7c) {
            ctx->pc = 0x253EBCu;
            goto label_253ebc;
        }
    }
    ctx->pc = 0x253E84u;
label_253e84:
    // 0x253e84: 0xaf8697b0  sw          $a2, -0x6850($gp)
    ctx->pc = 0x253e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940592), GPR_U32(ctx, 6));
    // 0x253e88: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x253E88u;
    SET_GPR_U32(ctx, 31, 0x253E90u);
    ctx->pc = 0x253E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253E88u;
            // 0x253e8c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253E90u; }
        if (ctx->pc != 0x253E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253E90u; }
        if (ctx->pc != 0x253E90u) { return; }
    }
    ctx->pc = 0x253E90u;
label_253e90:
    // 0x253e90: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x253e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x253e94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253e98: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x253E98u;
    SET_GPR_U32(ctx, 31, 0x253EA0u);
    ctx->pc = 0x253E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253E98u;
            // 0x253e9c: 0x24a51690  addiu       $a1, $a1, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EA0u; }
        if (ctx->pc != 0x253EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EA0u; }
        if (ctx->pc != 0x253EA0u) { return; }
    }
    ctx->pc = 0x253EA0u;
label_253ea0:
    // 0x253ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x253ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ea8: 0xc051a60  jal         func_146980
    ctx->pc = 0x253EA8u;
    SET_GPR_U32(ctx, 31, 0x253EB0u);
    ctx->pc = 0x253EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253EA8u;
            // 0x253eac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EB0u; }
        if (ctx->pc != 0x253EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EB0u; }
        if (ctx->pc != 0x253EB0u) { return; }
    }
    ctx->pc = 0x253EB0u;
label_253eb0:
    // 0x253eb0: 0xc0519c8  jal         func_146720
    ctx->pc = 0x253EB0u;
    SET_GPR_U32(ctx, 31, 0x253EB8u);
    ctx->pc = 0x253EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253EB0u;
            // 0x253eb4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EB8u; }
        if (ctx->pc != 0x253EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253EB8u; }
        if (ctx->pc != 0x253EB8u) { return; }
    }
    ctx->pc = 0x253EB8u;
label_253eb8:
    // 0x253eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253ebc:
    // 0x253ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x253EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253EC8u;
            // 0x253ecc: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253ED0u;
}
