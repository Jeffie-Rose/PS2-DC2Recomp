#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeFile__16CDngFloorManagerFPciP9mgCMemory
// Address: 0x2f9420 - 0x2f94ac
void AnalyzeFile__16CDngFloorManagerFPciP9mgCMemory_0x2f9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeFile__16CDngFloorManagerFPciP9mgCMemory_0x2f9420");
#endif

    switch (ctx->pc) {
        case 0x2f9450u: goto label_2f9450;
        case 0x2f945cu: goto label_2f945c;
        case 0x2f946cu: goto label_2f946c;
        case 0x2f947cu: goto label_2f947c;
        case 0x2f9484u: goto label_2f9484;
        case 0x2f948cu: goto label_2f948c;
        case 0x2f9494u: goto label_2f9494;
        default: break;
    }

    ctx->pc = 0x2f9420u;

    // 0x2f9420: 0x27bdf0f0  addiu       $sp, $sp, -0xF10
    ctx->pc = 0x2f9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963440));
    // 0x2f9424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f9424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f9428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f942c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f9430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f9434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f9438: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f9438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f943c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f943cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9440: 0xaf879f54  sw          $a3, -0x60AC($gp)
    ctx->pc = 0x2f9440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 7));
    // 0x2f9444: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2f9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9448: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2F9448u;
    SET_GPR_U32(ctx, 31, 0x2F9450u);
    ctx->pc = 0x2F944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9448u;
            // 0x2f944c: 0xaf929f4c  sw          $s2, -0x60B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942540), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9450u; }
        if (ctx->pc != 0x2F9450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9450u; }
        if (ctx->pc != 0x2F9450u) { return; }
    }
    ctx->pc = 0x2F9450u;
label_2f9450:
    // 0x2f9450: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f9450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f9454: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x2F9454u;
    SET_GPR_U32(ctx, 31, 0x2F945Cu);
    ctx->pc = 0x2F9458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9454u;
            // 0x2f9458: 0xa7809f60  sh          $zero, -0x60A0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294942560), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F945Cu; }
        if (ctx->pc != 0x2F945Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F945Cu; }
        if (ctx->pc != 0x2F945Cu) { return; }
    }
    ctx->pc = 0x2F945Cu;
label_2f945c:
    // 0x2f945c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2f945cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x2f9460: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f9460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f9464: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x2F9464u;
    SET_GPR_U32(ctx, 31, 0x2F946Cu);
    ctx->pc = 0x2F9468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9464u;
            // 0x2f9468: 0x24a5d010  addiu       $a1, $a1, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F946Cu; }
        if (ctx->pc != 0x2F946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F946Cu; }
        if (ctx->pc != 0x2F946Cu) { return; }
    }
    ctx->pc = 0x2F946Cu;
label_2f946c:
    // 0x2f946c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9470: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f9470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9474: 0xc051a60  jal         func_146980
    ctx->pc = 0x2F9474u;
    SET_GPR_U32(ctx, 31, 0x2F947Cu);
    ctx->pc = 0x2F9478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9474u;
            // 0x2f9478: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F947Cu; }
        if (ctx->pc != 0x2F947Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F947Cu; }
        if (ctx->pc != 0x2F947Cu) { return; }
    }
    ctx->pc = 0x2F947Cu;
label_2f947c:
    // 0x2f947c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x2F947Cu;
    SET_GPR_U32(ctx, 31, 0x2F9484u);
    ctx->pc = 0x2F9480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F947Cu;
            // 0x2f9480: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9484u; }
        if (ctx->pc != 0x2F9484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9484u; }
        if (ctx->pc != 0x2F9484u) { return; }
    }
    ctx->pc = 0x2F9484u;
label_2f9484:
    // 0x2f9484: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2F9484u;
    SET_GPR_U32(ctx, 31, 0x2F948Cu);
    ctx->pc = 0x2F9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9484u;
            // 0x2f9488: 0x8f849f54  lw          $a0, -0x60AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F948Cu; }
        if (ctx->pc != 0x2F948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F948Cu; }
        if (ctx->pc != 0x2F948Cu) { return; }
    }
    ctx->pc = 0x2F948Cu;
label_2f948c:
    // 0x2f948c: 0xc0be790  jal         func_2F9E40
    ctx->pc = 0x2F948Cu;
    SET_GPR_U32(ctx, 31, 0x2F9494u);
    ctx->pc = 0x2F9490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F948Cu;
            // 0x2f9490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9E40u;
    if (runtime->hasFunction(0x2F9E40u)) {
        auto targetFn = runtime->lookupFunction(0x2F9E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9494u; }
        if (ctx->pc != 0x2F9494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RelationGlid__16CDngFloorManagerFv_0x2f9e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9494u; }
        if (ctx->pc != 0x2F9494u) { return; }
    }
    ctx->pc = 0x2F9494u;
label_2f9494:
    // 0x2f9494: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f9494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f949c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f949cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f94a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f94a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f94a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F94A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F94A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94A4u;
            // 0x2f94a8: 0x27bd0f10  addiu       $sp, $sp, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F94ACu;
}
