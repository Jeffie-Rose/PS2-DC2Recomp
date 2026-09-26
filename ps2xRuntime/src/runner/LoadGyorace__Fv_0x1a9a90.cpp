#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGyorace__Fv
// Address: 0x1a9a90 - 0x1a9b08
void LoadGyorace__Fv_0x1a9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGyorace__Fv_0x1a9a90");
#endif

    switch (ctx->pc) {
        case 0x1a9ab0u: goto label_1a9ab0;
        case 0x1a9ad8u: goto label_1a9ad8;
        case 0x1a9ae4u: goto label_1a9ae4;
        case 0x1a9af4u: goto label_1a9af4;
        case 0x1a9afcu: goto label_1a9afc;
        default: break;
    }

    ctx->pc = 0x1a9a90u;

    // 0x1a9a90: 0x27bdb100  addiu       $sp, $sp, -0x4F00
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294947072));
    // 0x1a9a94: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1a9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1a9a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9a9c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9aa0: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x1a9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x1a9aa4: 0x27a64efc  addiu       $a2, $sp, 0x4EFC
    ctx->pc = 0x1a9aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20220));
    // 0x1a9aa8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1A9AA8u;
    SET_GPR_U32(ctx, 31, 0x1A9AB0u);
    ctx->pc = 0x1A9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AA8u;
            // 0x1a9aac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AB0u; }
        if (ctx->pc != 0x1A9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AB0u; }
        if (ctx->pc != 0x1A9AB0u) { return; }
    }
    ctx->pc = 0x1A9AB0u;
label_1a9ab0:
    // 0x1a9ab0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9AB0u;
    {
        const bool branch_taken_0x1a9ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9ab0) {
            ctx->pc = 0x1A9AFCu;
            goto label_1a9afc;
        }
    }
    ctx->pc = 0x1A9AB8u;
    // 0x1a9ab8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a9abc: 0xaf808c44  sw          $zero, -0x73BC($gp)
    ctx->pc = 0x1a9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 0));
    // 0x1a9ac0: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x1a9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x1a9ac4: 0x27a34010  addiu       $v1, $sp, 0x4010
    ctx->pc = 0x1a9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    // 0x1a9ac8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a9ac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9acc: 0x27a44020  addiu       $a0, $sp, 0x4020
    ctx->pc = 0x1a9accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16416));
    // 0x1a9ad0: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1A9AD0u;
    SET_GPR_U32(ctx, 31, 0x1A9AD8u);
    ctx->pc = 0x1A9AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AD0u;
            // 0x1a9ad4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AD8u; }
        if (ctx->pc != 0x1A9AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AD8u; }
        if (ctx->pc != 0x1A9AD8u) { return; }
    }
    ctx->pc = 0x1A9AD8u;
label_1a9ad8:
    // 0x1a9ad8: 0x27a44020  addiu       $a0, $sp, 0x4020
    ctx->pc = 0x1a9ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16416));
    // 0x1a9adc: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1A9ADCu;
    SET_GPR_U32(ctx, 31, 0x1A9AE4u);
    ctx->pc = 0x1A9AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9ADCu;
            // 0x1a9ae0: 0x27a54010  addiu       $a1, $sp, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AE4u; }
        if (ctx->pc != 0x1A9AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AE4u; }
        if (ctx->pc != 0x1A9AE4u) { return; }
    }
    ctx->pc = 0x1A9AE4u;
label_1a9ae4:
    // 0x1a9ae4: 0x8fa64efc  lw          $a2, 0x4EFC($sp)
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20220)));
    // 0x1a9ae8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a9ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9aec: 0xc051a60  jal         func_146980
    ctx->pc = 0x1A9AECu;
    SET_GPR_U32(ctx, 31, 0x1A9AF4u);
    ctx->pc = 0x1A9AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AECu;
            // 0x1a9af0: 0x27a44020  addiu       $a0, $sp, 0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AF4u; }
        if (ctx->pc != 0x1A9AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AF4u; }
        if (ctx->pc != 0x1A9AF4u) { return; }
    }
    ctx->pc = 0x1A9AF4u;
label_1a9af4:
    // 0x1a9af4: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1A9AF4u;
    SET_GPR_U32(ctx, 31, 0x1A9AFCu);
    ctx->pc = 0x1A9AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AF4u;
            // 0x1a9af8: 0x27a44020  addiu       $a0, $sp, 0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AFCu; }
        if (ctx->pc != 0x1A9AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AFCu; }
        if (ctx->pc != 0x1A9AFCu) { return; }
    }
    ctx->pc = 0x1A9AFCu;
label_1a9afc:
    // 0x1a9afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B00u;
            // 0x1a9b04: 0x27bd4f00  addiu       $sp, $sp, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9B08u;
}
