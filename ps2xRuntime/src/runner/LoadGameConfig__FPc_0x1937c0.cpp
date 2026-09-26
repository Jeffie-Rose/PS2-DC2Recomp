#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGameConfig__FPc
// Address: 0x1937c0 - 0x193870
void LoadGameConfig__FPc_0x1937c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGameConfig__FPc_0x1937c0");
#endif

    switch (ctx->pc) {
        case 0x1937d8u: goto label_1937d8;
        case 0x1937f0u: goto label_1937f0;
        case 0x193800u: goto label_193800;
        case 0x193810u: goto label_193810;
        case 0x193828u: goto label_193828;
        case 0x19383cu: goto label_19383c;
        case 0x19384cu: goto label_19384c;
        case 0x19385cu: goto label_19385c;
        case 0x193864u: goto label_193864;
        default: break;
    }

    ctx->pc = 0x1937c0u;

    // 0x1937c0: 0x27bdb110  addiu       $sp, $sp, -0x4EF0
    ctx->pc = 0x1937c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294947088));
    // 0x1937c4: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1937C4u;
    {
        const bool branch_taken_0x1937c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1937C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937C4u;
            // 0x1937c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937c4) {
            ctx->pc = 0x193818u;
            goto label_193818;
        }
    }
    ctx->pc = 0x1937CCu;
    // 0x1937cc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1937ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1937d0: 0xc0521d8  jal         func_148760
    ctx->pc = 0x1937D0u;
    SET_GPR_U32(ctx, 31, 0x1937D8u);
    ctx->pc = 0x1937D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937D0u;
            // 0x1937d4: 0x24844cb8  addiu       $a0, $a0, 0x4CB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937D8u; }
        if (ctx->pc != 0x1937D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937D8u; }
        if (ctx->pc != 0x1937D8u) { return; }
    }
    ctx->pc = 0x1937D8u;
label_1937d8:
    // 0x1937d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1937dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1937dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1937e0: 0x24845230  addiu       $a0, $a0, 0x5230
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21040));
    // 0x1937e4: 0x27a64eec  addiu       $a2, $sp, 0x4EEC
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20204));
    // 0x1937e8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1937E8u;
    SET_GPR_U32(ctx, 31, 0x1937F0u);
    ctx->pc = 0x1937ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937E8u;
            // 0x1937ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937F0u; }
        if (ctx->pc != 0x1937F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937F0u; }
        if (ctx->pc != 0x1937F0u) { return; }
    }
    ctx->pc = 0x1937F0u;
label_1937f0:
    // 0x1937f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1937F0u;
    {
        const bool branch_taken_0x1937f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1937F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937F0u;
            // 0x1937f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937f0) {
            ctx->pc = 0x193808u;
            goto label_193808;
        }
    }
    ctx->pc = 0x1937F8u;
    // 0x1937f8: 0xc0521d8  jal         func_148760
    ctx->pc = 0x1937F8u;
    SET_GPR_U32(ctx, 31, 0x193800u);
    ctx->pc = 0x1937FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937F8u;
            // 0x1937fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193800u; }
        if (ctx->pc != 0x193800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193800u; }
        if (ctx->pc != 0x193800u) { return; }
    }
    ctx->pc = 0x193800u;
label_193800:
    // 0x193800: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x193800u;
    {
        const bool branch_taken_0x193800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193800u;
            // 0x193804: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193800) {
            ctx->pc = 0x193868u;
            goto label_193868;
        }
    }
    ctx->pc = 0x193808u;
label_193808:
    // 0x193808: 0xc0521d8  jal         func_148760
    ctx->pc = 0x193808u;
    SET_GPR_U32(ctx, 31, 0x193810u);
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193810u; }
        if (ctx->pc != 0x193810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193810u; }
        if (ctx->pc != 0x193810u) { return; }
    }
    ctx->pc = 0x193810u;
label_193810:
    // 0x193810: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193810u;
    {
        const bool branch_taken_0x193810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193810u;
            // 0x193814: 0x27a44010  addiu       $a0, $sp, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193810) {
            ctx->pc = 0x193834u;
            goto label_193834;
        }
    }
    ctx->pc = 0x193818u;
label_193818:
    // 0x193818: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x193818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19381c: 0x27a64eec  addiu       $a2, $sp, 0x4EEC
    ctx->pc = 0x19381cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20204));
    // 0x193820: 0xc0524dc  jal         func_149370
    ctx->pc = 0x193820u;
    SET_GPR_U32(ctx, 31, 0x193828u);
    ctx->pc = 0x193824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193820u;
            // 0x193824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193828u; }
        if (ctx->pc != 0x193828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193828u; }
        if (ctx->pc != 0x193828u) { return; }
    }
    ctx->pc = 0x193828u;
label_193828:
    // 0x193828: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x193828u;
    {
        const bool branch_taken_0x193828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193828) {
            ctx->pc = 0x193864u;
            goto label_193864;
        }
    }
    ctx->pc = 0x193830u;
    // 0x193830: 0x27a44010  addiu       $a0, $sp, 0x4010
    ctx->pc = 0x193830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
label_193834:
    // 0x193834: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x193834u;
    SET_GPR_U32(ctx, 31, 0x19383Cu);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        if (ctx->pc != 0x19383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        if (ctx->pc != 0x19383Cu) { return; }
    }
    ctx->pc = 0x19383Cu;
label_19383c:
    // 0x19383c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x19383cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x193840: 0x27a44010  addiu       $a0, $sp, 0x4010
    ctx->pc = 0x193840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    // 0x193844: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x193844u;
    SET_GPR_U32(ctx, 31, 0x19384Cu);
    ctx->pc = 0x193848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193844u;
            // 0x193848: 0x24a55580  addiu       $a1, $a1, 0x5580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19384Cu; }
        if (ctx->pc != 0x19384Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19384Cu; }
        if (ctx->pc != 0x19384Cu) { return; }
    }
    ctx->pc = 0x19384Cu;
label_19384c:
    // 0x19384c: 0x8fa64eec  lw          $a2, 0x4EEC($sp)
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20204)));
    // 0x193850: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193854: 0xc051a60  jal         func_146980
    ctx->pc = 0x193854u;
    SET_GPR_U32(ctx, 31, 0x19385Cu);
    ctx->pc = 0x193858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193854u;
            // 0x193858: 0x27a44010  addiu       $a0, $sp, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19385Cu; }
        if (ctx->pc != 0x19385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19385Cu; }
        if (ctx->pc != 0x19385Cu) { return; }
    }
    ctx->pc = 0x19385Cu;
label_19385c:
    // 0x19385c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x19385Cu;
    SET_GPR_U32(ctx, 31, 0x193864u);
    ctx->pc = 0x193860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19385Cu;
            // 0x193860: 0x27a44010  addiu       $a0, $sp, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193864u; }
        if (ctx->pc != 0x193864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193864u; }
        if (ctx->pc != 0x193864u) { return; }
    }
    ctx->pc = 0x193864u;
label_193864:
    // 0x193864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193868:
    // 0x193868: 0x3e00008  jr          $ra
    ctx->pc = 0x193868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193868u;
            // 0x19386c: 0x27bd4ef0  addiu       $sp, $sp, 0x4EF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193870u;
}
