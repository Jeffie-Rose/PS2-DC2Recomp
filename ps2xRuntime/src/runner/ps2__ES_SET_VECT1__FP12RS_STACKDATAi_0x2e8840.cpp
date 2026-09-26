#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ES_SET_VECT1__FP12RS_STACKDATAi
// Address: 0x2e8840 - 0x2e88e4
void ps2__ES_SET_VECT1__FP12RS_STACKDATAi_0x2e8840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ES_SET_VECT1__FP12RS_STACKDATAi_0x2e8840");
#endif

    switch (ctx->pc) {
        case 0x2e8874u: goto label_2e8874;
        case 0x2e888cu: goto label_2e888c;
        case 0x2e889cu: goto label_2e889c;
        case 0x2e88acu: goto label_2e88ac;
        case 0x2e88c0u: goto label_2e88c0;
        default: break;
    }

    ctx->pc = 0x2e8840u;

    // 0x2e8840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8844: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e8848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e884c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8850: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8850u;
    {
        const bool branch_taken_0x2e8850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8850u;
            // 0x2e8854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8850) {
            ctx->pc = 0x2E8894u;
            goto label_2e8894;
        }
    }
    ctx->pc = 0x2E8858u;
    // 0x2e8858: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e885c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E885Cu;
    {
        const bool branch_taken_0x2e885c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E885Cu;
            // 0x2e8860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e885c) {
            ctx->pc = 0x2E886Cu;
            goto label_2e886c;
        }
    }
    ctx->pc = 0x2E8864u;
    // 0x2e8864: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E8864u;
    {
        const bool branch_taken_0x2e8864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8864u;
            // 0x2e8868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8864) {
            ctx->pc = 0x2E88C8u;
            goto label_2e88c8;
        }
    }
    ctx->pc = 0x2E886Cu;
label_2e886c:
    // 0x2e886c: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E886Cu;
    SET_GPR_U32(ctx, 31, 0x2E8874u);
    ctx->pc = 0x2E8870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E886Cu;
            // 0x2e8870: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8874u; }
        if (ctx->pc != 0x2E8874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8874u; }
        if (ctx->pc != 0x2E8874u) { return; }
    }
    ctx->pc = 0x2E8874u;
label_2e8874:
    // 0x2e8874: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8878: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e8878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e887c: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8880: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8884: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2E8884u;
    SET_GPR_U32(ctx, 31, 0x2E888Cu);
    ctx->pc = 0x2E8888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8884u;
            // 0x2e8888: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E888Cu; }
        if (ctx->pc != 0x2E888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E888Cu; }
        if (ctx->pc != 0x2E888Cu) { return; }
    }
    ctx->pc = 0x2E888Cu;
label_2e888c:
    // 0x2e888c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E888Cu;
    {
        const bool branch_taken_0x2e888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E888Cu;
            // 0x2e8890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e888c) {
            ctx->pc = 0x2E88D4u;
            goto label_2e88d4;
        }
    }
    ctx->pc = 0x2E8894u;
label_2e8894:
    // 0x2e8894: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8894u;
    SET_GPR_U32(ctx, 31, 0x2E889Cu);
    ctx->pc = 0x2E8898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8894u;
            // 0x2e8898: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E889Cu; }
        if (ctx->pc != 0x2E889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E889Cu; }
        if (ctx->pc != 0x2E889Cu) { return; }
    }
    ctx->pc = 0x2E889Cu;
label_2e889c:
    // 0x2e889c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e889cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e88a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e88a4: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E88A4u;
    SET_GPR_U32(ctx, 31, 0x2E88ACu);
    ctx->pc = 0x2E88A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88A4u;
            // 0x2e88a8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88ACu; }
        if (ctx->pc != 0x2E88ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88ACu; }
        if (ctx->pc != 0x2E88ACu) { return; }
    }
    ctx->pc = 0x2E88ACu;
label_2e88ac:
    // 0x2e88ac: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e88b0: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e88b4: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e88b8: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2E88B8u;
    SET_GPR_U32(ctx, 31, 0x2E88C0u);
    ctx->pc = 0x2E88BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88B8u;
            // 0x2e88bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88C0u; }
        if (ctx->pc != 0x2E88C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E88C0u; }
        if (ctx->pc != 0x2E88C0u) { return; }
    }
    ctx->pc = 0x2E88C0u;
label_2e88c0:
    // 0x2e88c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E88C0u;
    {
        const bool branch_taken_0x2e88c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88c0) {
            ctx->pc = 0x2E88D0u;
            goto label_2e88d0;
        }
    }
    ctx->pc = 0x2E88C8u;
label_2e88c8:
    // 0x2e88c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E88C8u;
    {
        const bool branch_taken_0x2e88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E88CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88C8u;
            // 0x2e88cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88c8) {
            ctx->pc = 0x2E88D8u;
            goto label_2e88d8;
        }
    }
    ctx->pc = 0x2E88D0u;
label_2e88d0:
    // 0x2e88d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e88d4:
    // 0x2e88d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e88d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e88d8:
    // 0x2e88d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e88d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e88dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E88DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E88E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E88DCu;
            // 0x2e88e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E88E4u;
}
