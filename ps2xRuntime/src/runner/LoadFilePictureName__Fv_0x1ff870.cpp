#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFilePictureName__Fv
// Address: 0x1ff870 - 0x1ff920
void LoadFilePictureName__Fv_0x1ff870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFilePictureName__Fv_0x1ff870");
#endif

    switch (ctx->pc) {
        case 0x1ff888u: goto label_1ff888;
        case 0x1ff89cu: goto label_1ff89c;
        case 0x1ff8acu: goto label_1ff8ac;
        case 0x1ff8c4u: goto label_1ff8c4;
        case 0x1ff8d0u: goto label_1ff8d0;
        case 0x1ff8e0u: goto label_1ff8e0;
        case 0x1ff8f0u: goto label_1ff8f0;
        case 0x1ff8f8u: goto label_1ff8f8;
        case 0x1ff90cu: goto label_1ff90c;
        default: break;
    }

    ctx->pc = 0x1ff870u;

    // 0x1ff870: 0x27bda0d0  addiu       $sp, $sp, -0x5F30
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294942928));
    // 0x1ff874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ff874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ff878: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ff878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff87c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff880: 0xc04e640  jal         func_139900
    ctx->pc = 0x1FF880u;
    SET_GPR_U32(ctx, 31, 0x1FF888u);
    ctx->pc = 0x1FF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF880u;
            // 0x1ff884: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF888u; }
        if (ctx->pc != 0x1FF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF888u; }
        if (ctx->pc != 0x1FF888u) { return; }
    }
    ctx->pc = 0x1FF888u;
label_1ff888:
    // 0x1ff888: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1ff88c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ff88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff890: 0x24a59770  addiu       $a1, $a1, -0x6890
    ctx->pc = 0x1ff890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940528));
    // 0x1ff894: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1FF894u;
    SET_GPR_U32(ctx, 31, 0x1FF89Cu);
    ctx->pc = 0x1FF898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF894u;
            // 0x1ff898: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF89Cu; }
        if (ctx->pc != 0x1FF89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF89Cu; }
        if (ctx->pc != 0x1FF89Cu) { return; }
    }
    ctx->pc = 0x1FF89Cu;
label_1ff89c:
    // 0x1ff89c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1ff89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff8a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ff8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ff8a4: 0xc094430  jal         func_2510C0
    ctx->pc = 0x1FF8A4u;
    SET_GPR_U32(ctx, 31, 0x1FF8ACu);
    ctx->pc = 0x1FF8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8A4u;
            // 0x1ff8a8: 0xaf8290ec  sw          $v0, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8ACu; }
        if (ctx->pc != 0x1FF8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8ACu; }
        if (ctx->pc != 0x1FF8ACu) { return; }
    }
    ctx->pc = 0x1FF8ACu;
label_1ff8ac:
    // 0x1ff8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8b0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ff8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ff8b4: 0x24849038  addiu       $a0, $a0, -0x6FC8
    ctx->pc = 0x1ff8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938680));
    // 0x1ff8b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ff8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8bc: 0xc094440  jal         func_251100
    ctx->pc = 0x1FF8BCu;
    SET_GPR_U32(ctx, 31, 0x1FF8C4u);
    ctx->pc = 0x1FF8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8BCu;
            // 0x1ff8c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8C4u; }
        if (ctx->pc != 0x1FF8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8C4u; }
        if (ctx->pc != 0x1FF8C4u) { return; }
    }
    ctx->pc = 0x1FF8C4u;
label_1ff8c4:
    // 0x1ff8c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ff8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8c8: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1FF8C8u;
    SET_GPR_U32(ctx, 31, 0x1FF8D0u);
    ctx->pc = 0x1FF8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8C8u;
            // 0x1ff8cc: 0x27a45060  addiu       $a0, $sp, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8D0u; }
        if (ctx->pc != 0x1FF8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8D0u; }
        if (ctx->pc != 0x1FF8D0u) { return; }
    }
    ctx->pc = 0x1FF8D0u;
label_1ff8d0:
    // 0x1ff8d0: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1ff8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x1ff8d4: 0x27a45060  addiu       $a0, $sp, 0x5060
    ctx->pc = 0x1ff8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20576));
    // 0x1ff8d8: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1FF8D8u;
    SET_GPR_U32(ctx, 31, 0x1FF8E0u);
    ctx->pc = 0x1FF8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8D8u;
            // 0x1ff8dc: 0x24a5ee00  addiu       $a1, $a1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8E0u; }
        if (ctx->pc != 0x1FF8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8E0u; }
        if (ctx->pc != 0x1FF8E0u) { return; }
    }
    ctx->pc = 0x1FF8E0u;
label_1ff8e0:
    // 0x1ff8e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ff8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ff8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8e8: 0xc051a60  jal         func_146980
    ctx->pc = 0x1FF8E8u;
    SET_GPR_U32(ctx, 31, 0x1FF8F0u);
    ctx->pc = 0x1FF8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8E8u;
            // 0x1ff8ec: 0x27a45060  addiu       $a0, $sp, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8F0u; }
        if (ctx->pc != 0x1FF8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8F0u; }
        if (ctx->pc != 0x1FF8F0u) { return; }
    }
    ctx->pc = 0x1FF8F0u;
label_1ff8f0:
    // 0x1ff8f0: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1FF8F0u;
    SET_GPR_U32(ctx, 31, 0x1FF8F8u);
    ctx->pc = 0x1FF8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8F0u;
            // 0x1ff8f4: 0x27a45060  addiu       $a0, $sp, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8F8u; }
        if (ctx->pc != 0x1FF8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8F8u; }
        if (ctx->pc != 0x1FF8F8u) { return; }
    }
    ctx->pc = 0x1FF8F8u;
label_1ff8f8:
    // 0x1ff8f8: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1ff8fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ff8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ff900: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ff900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ff904: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1FF904u;
    SET_GPR_U32(ctx, 31, 0x1FF90Cu);
    ctx->pc = 0x1FF908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF904u;
            // 0x1ff908: 0x24849048  addiu       $a0, $a0, -0x6FB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF90Cu; }
        if (ctx->pc != 0x1FF90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF90Cu; }
        if (ctx->pc != 0x1FF90Cu) { return; }
    }
    ctx->pc = 0x1FF90Cu;
label_1ff90c:
    // 0x1ff90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff918: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF918u;
            // 0x1ff91c: 0x27bd5f30  addiu       $sp, $sp, 0x5F30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 24368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF920u;
}
