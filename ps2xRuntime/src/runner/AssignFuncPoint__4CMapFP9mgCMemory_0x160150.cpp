#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignFuncPoint__4CMapFP9mgCMemory
// Address: 0x160150 - 0x160298
void AssignFuncPoint__4CMapFP9mgCMemory_0x160150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignFuncPoint__4CMapFP9mgCMemory_0x160150");
#endif

    switch (ctx->pc) {
        case 0x160178u: goto label_160178;
        case 0x1601bcu: goto label_1601bc;
        case 0x1601d4u: goto label_1601d4;
        case 0x1601f0u: goto label_1601f0;
        case 0x16020cu: goto label_16020c;
        case 0x160214u: goto label_160214;
        case 0x16021cu: goto label_16021c;
        case 0x16024cu: goto label_16024c;
        case 0x160260u: goto label_160260;
        case 0x16026cu: goto label_16026c;
        case 0x160280u: goto label_160280;
        default: break;
    }

    ctx->pc = 0x160150u;

    // 0x160150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x160154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x160158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16015c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160160: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x160160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160164: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x160164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160168: 0x26440cb0  addiu       $a0, $s2, 0xCB0
    ctx->pc = 0x160168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
    // 0x16016c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x160170: 0xc0a75c4  jal         func_29D710
    ctx->pc = 0x160170u;
    SET_GPR_U32(ctx, 31, 0x160178u);
    ctx->pc = 0x160174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160170u;
            // 0x160174: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D710u;
    if (runtime->hasFunction(0x29D710u)) {
        auto targetFn = runtime->lookupFunction(0x29D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160178u; }
        if (ctx->pc != 0x160178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__14CFuncPointMngrFi_0x29d710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160178u; }
        if (ctx->pc != 0x160178u) { return; }
    }
    ctx->pc = 0x160178u;
label_160178:
    // 0x160178: 0xae420c8c  sw          $v0, 0xC8C($s2)
    ctx->pc = 0x160178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 2));
    // 0x16017c: 0x8e500c8c  lw          $s0, 0xC8C($s2)
    ctx->pc = 0x16017cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3212)));
    // 0x160180: 0x1a00003f  blez        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x160180u;
    {
        const bool branch_taken_0x160180 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x160180) {
            ctx->pc = 0x160280u;
            goto label_160280;
        }
    }
    ctx->pc = 0x160188u;
    // 0x160188: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x160188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x16018c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x160190: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160194: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x160194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x160198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160198u;
    {
        const bool branch_taken_0x160198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160198u;
            // 0x16019c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160198) {
            ctx->pc = 0x1601B0u;
            goto label_1601b0;
        }
    }
    ctx->pc = 0x1601A0u;
    // 0x1601a0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1601a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1601a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1601A4u;
    {
        const bool branch_taken_0x1601a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1601A4u;
            // 0x1601a8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601a4) {
            ctx->pc = 0x1601B0u;
            goto label_1601b0;
        }
    }
    ctx->pc = 0x1601ACu;
    // 0x1601ac: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1601acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1601b0:
    // 0x1601b0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1601b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1601b4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1601B4u;
    SET_GPR_U32(ctx, 31, 0x1601BCu);
    ctx->pc = 0x1601B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601B4u;
            // 0x1601b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601BCu; }
        if (ctx->pc != 0x1601BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601BCu; }
        if (ctx->pc != 0x1601BCu) { return; }
    }
    ctx->pc = 0x1601BCu;
label_1601bc:
    // 0x1601bc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1601bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1601c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1601c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601c4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1601c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1601c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1601cc: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1601CCu;
    SET_GPR_U32(ctx, 31, 0x1601D4u);
    ctx->pc = 0x1601D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601CCu;
            // 0x1601d0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601D4u; }
        if (ctx->pc != 0x1601D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601D4u; }
        if (ctx->pc != 0x1601D4u) { return; }
    }
    ctx->pc = 0x1601D4u;
label_1601d4:
    // 0x1601d4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x1601d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x1601d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1601d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1601dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601e0: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x1601e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1601e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601e8: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1601E8u;
    SET_GPR_U32(ctx, 31, 0x1601F0u);
    ctx->pc = 0x1601ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601E8u;
            // 0x1601ec: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601F0u; }
        if (ctx->pc != 0x1601F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601F0u; }
        if (ctx->pc != 0x1601F0u) { return; }
    }
    ctx->pc = 0x1601F0u;
label_1601f0:
    // 0x1601f0: 0xae420c90  sw          $v0, 0xC90($s2)
    ctx->pc = 0x1601f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3216), GPR_U32(ctx, 2));
    // 0x1601f4: 0x8e510c90  lw          $s1, 0xC90($s2)
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
    // 0x1601f8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1601F8u;
    {
        const bool branch_taken_0x1601f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601f8) {
            ctx->pc = 0x160280u;
            goto label_160280;
        }
    }
    ctx->pc = 0x160200u;
    // 0x160200: 0x26440cb0  addiu       $a0, $s2, 0xCB0
    ctx->pc = 0x160200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
    // 0x160204: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x160204u;
    SET_GPR_U32(ctx, 31, 0x16020Cu);
    ctx->pc = 0x160208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160204u;
            // 0x160208: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16020Cu; }
        if (ctx->pc != 0x16020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16020Cu; }
        if (ctx->pc != 0x16020Cu) { return; }
    }
    ctx->pc = 0x16020Cu;
label_16020c:
    // 0x16020c: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x16020Cu;
    SET_GPR_U32(ctx, 31, 0x160214u);
    ctx->pc = 0x160210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16020Cu;
            // 0x160210: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160214u; }
        if (ctx->pc != 0x160214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160214u; }
        if (ctx->pc != 0x160214u) { return; }
    }
    ctx->pc = 0x160214u;
label_160214:
    // 0x160214: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x160214u;
    {
        const bool branch_taken_0x160214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160214u;
            // 0x160218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160214) {
            ctx->pc = 0x160274u;
            goto label_160274;
        }
    }
    ctx->pc = 0x16021Cu;
label_16021c:
    // 0x16021c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x16021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x160220: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x160220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x160224: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x160224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x160228: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x160228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x16022c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x16022cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x160230: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x160230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x160234: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x160234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x160238: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16023c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16023Cu;
    {
        const bool branch_taken_0x16023c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16023Cu;
            // 0x160240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16023c) {
            ctx->pc = 0x16024Cu;
            goto label_16024c;
        }
    }
    ctx->pc = 0x160244u;
    // 0x160244: 0xc057508  jal         func_15D420
    ctx->pc = 0x160244u;
    SET_GPR_U32(ctx, 31, 0x16024Cu);
    ctx->pc = 0x160248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160244u;
            // 0x160248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16024Cu; }
        if (ctx->pc != 0x16024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16024Cu; }
        if (ctx->pc != 0x16024Cu) { return; }
    }
    ctx->pc = 0x16024Cu;
label_16024c:
    // 0x16024c: 0x0  nop
    ctx->pc = 0x16024cu;
    // NOP
    // 0x160250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160254: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160258: 0xc0a74a4  jal         func_29D290
    ctx->pc = 0x160258u;
    SET_GPR_U32(ctx, 31, 0x160260u);
    ctx->pc = 0x16025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160258u;
            // 0x16025c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D290u;
    if (runtime->hasFunction(0x29D290u)) {
        auto targetFn = runtime->lookupFunction(0x29D290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160260u; }
        if (ctx->pc != 0x160260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignFuncAnime__9CObjAnimeFP10CFuncPointP9CMapParts_0x29d290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160260u; }
        if (ctx->pc != 0x160260u) { return; }
    }
    ctx->pc = 0x160260u;
label_160260:
    // 0x160260: 0x26440cb0  addiu       $a0, $s2, 0xCB0
    ctx->pc = 0x160260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
    // 0x160264: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x160264u;
    SET_GPR_U32(ctx, 31, 0x16026Cu);
    ctx->pc = 0x160268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160264u;
            // 0x160268: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16026Cu; }
        if (ctx->pc != 0x16026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16026Cu; }
        if (ctx->pc != 0x16026Cu) { return; }
    }
    ctx->pc = 0x16026Cu;
label_16026c:
    // 0x16026c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16026Cu;
    {
        const bool branch_taken_0x16026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16026Cu;
            // 0x160270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16026c) {
            ctx->pc = 0x16021Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16021c;
        }
    }
    ctx->pc = 0x160274u;
label_160274:
    // 0x160274: 0x0  nop
    ctx->pc = 0x160274u;
    // NOP
    // 0x160278: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x160278u;
    SET_GPR_U32(ctx, 31, 0x160280u);
    ctx->pc = 0x16027Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160278u;
            // 0x16027c: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160280u; }
        if (ctx->pc != 0x160280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160280u; }
        if (ctx->pc != 0x160280u) { return; }
    }
    ctx->pc = 0x160280u;
label_160280:
    // 0x160280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x160280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16028c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16028cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160290: 0x3e00008  jr          $ra
    ctx->pc = 0x160290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160290u;
            // 0x160294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160298u;
}
