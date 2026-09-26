#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewVertexTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a450 - 0x17a5a8
void NewVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a450");
#endif

    switch (ctx->pc) {
        case 0x17a498u: goto label_17a498;
        case 0x17a4c0u: goto label_17a4c0;
        case 0x17a4e8u: goto label_17a4e8;
        case 0x17a510u: goto label_17a510;
        case 0x17a538u: goto label_17a538;
        case 0x17a548u: goto label_17a548;
        case 0x17a554u: goto label_17a554;
        case 0x17a560u: goto label_17a560;
        case 0x17a56cu: goto label_17a56c;
        case 0x17a578u: goto label_17a578;
        default: break;
    }

    ctx->pc = 0x17a450u;

    // 0x17a450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a45c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a460: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a468: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x17a468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x17a46c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17a470: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a474: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A478u;
    {
        const bool branch_taken_0x17a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A478u;
            // 0x17a47c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a478) {
            ctx->pc = 0x17A48Cu;
            goto label_17a48c;
        }
    }
    ctx->pc = 0x17A480u;
    // 0x17a480: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a484: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A484u;
    {
        const bool branch_taken_0x17a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A484u;
            // 0x17a488: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a484) {
            ctx->pc = 0x17A490u;
            goto label_17a490;
        }
    }
    ctx->pc = 0x17A48Cu;
label_17a48c:
    // 0x17a48c: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a490:
    // 0x17a490: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A490u;
    SET_GPR_U32(ctx, 31, 0x17A498u);
    ctx->pc = 0x17A494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A490u;
            // 0x17a494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A498u; }
        if (ctx->pc != 0x17A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A498u; }
        if (ctx->pc != 0x17A498u) { return; }
    }
    ctx->pc = 0x17A498u;
label_17a498:
    // 0x17a498: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x17a498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x17a49c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a4a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a4a4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A4A8u;
    {
        const bool branch_taken_0x17a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4A8u;
            // 0x17a4ac: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4a8) {
            ctx->pc = 0x17A4B8u;
            goto label_17a4b8;
        }
    }
    ctx->pc = 0x17A4B0u;
    // 0x17a4b0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a4b4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17a4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a4b8:
    // 0x17a4b8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A4B8u;
    SET_GPR_U32(ctx, 31, 0x17A4C0u);
    ctx->pc = 0x17A4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4B8u;
            // 0x17a4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4C0u; }
        if (ctx->pc != 0x17A4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4C0u; }
        if (ctx->pc != 0x17A4C0u) { return; }
    }
    ctx->pc = 0x17A4C0u;
label_17a4c0:
    // 0x17a4c0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x17a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x17a4c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a4c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a4cc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a4d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A4D0u;
    {
        const bool branch_taken_0x17a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4D0u;
            // 0x17a4d4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4d0) {
            ctx->pc = 0x17A4E0u;
            goto label_17a4e0;
        }
    }
    ctx->pc = 0x17A4D8u;
    // 0x17a4d8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a4dc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a4e0:
    // 0x17a4e0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A4E0u;
    SET_GPR_U32(ctx, 31, 0x17A4E8u);
    ctx->pc = 0x17A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4E0u;
            // 0x17a4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4E8u; }
        if (ctx->pc != 0x17A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4E8u; }
        if (ctx->pc != 0x17A4E8u) { return; }
    }
    ctx->pc = 0x17A4E8u;
label_17a4e8:
    // 0x17a4e8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x17a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x17a4ec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a4f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a4f4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a4f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A4F8u;
    {
        const bool branch_taken_0x17a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A4F8u;
            // 0x17a4fc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4f8) {
            ctx->pc = 0x17A508u;
            goto label_17a508;
        }
    }
    ctx->pc = 0x17A500u;
    // 0x17a500: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a500u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a504: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17a504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a508:
    // 0x17a508: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A508u;
    SET_GPR_U32(ctx, 31, 0x17A510u);
    ctx->pc = 0x17A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A508u;
            // 0x17a50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A510u; }
        if (ctx->pc != 0x17A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A510u; }
        if (ctx->pc != 0x17A510u) { return; }
    }
    ctx->pc = 0x17A510u;
label_17a510:
    // 0x17a510: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x17a510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x17a514: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a518: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a51c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A520u;
    {
        const bool branch_taken_0x17a520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A520u;
            // 0x17a524: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a520) {
            ctx->pc = 0x17A530u;
            goto label_17a530;
        }
    }
    ctx->pc = 0x17A528u;
    // 0x17a528: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a52c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a530:
    // 0x17a530: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A530u;
    SET_GPR_U32(ctx, 31, 0x17A538u);
    ctx->pc = 0x17A534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A530u;
            // 0x17a534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A538u; }
        if (ctx->pc != 0x17A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A538u; }
        if (ctx->pc != 0x17A538u) { return; }
    }
    ctx->pc = 0x17A538u;
label_17a538:
    // 0x17a538: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x17a538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x17a53c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a540: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17A540u;
    {
        const bool branch_taken_0x17a540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A540u;
            // 0x17a544: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a540) {
            ctx->pc = 0x17A580u;
            goto label_17a580;
        }
    }
    ctx->pc = 0x17A548u;
label_17a548:
    // 0x17a548: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x17a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17a54c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17A54Cu;
    SET_GPR_U32(ctx, 31, 0x17A554u);
    ctx->pc = 0x17A550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A54Cu;
            // 0x17a550: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A554u; }
        if (ctx->pc != 0x17A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A554u; }
        if (ctx->pc != 0x17A554u) { return; }
    }
    ctx->pc = 0x17A554u;
label_17a554:
    // 0x17a554: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x17a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17a558: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17A558u;
    SET_GPR_U32(ctx, 31, 0x17A560u);
    ctx->pc = 0x17A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A558u;
            // 0x17a55c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A560u; }
        if (ctx->pc != 0x17A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A560u; }
        if (ctx->pc != 0x17A560u) { return; }
    }
    ctx->pc = 0x17A560u;
label_17a560:
    // 0x17a560: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x17a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17a564: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17A564u;
    SET_GPR_U32(ctx, 31, 0x17A56Cu);
    ctx->pc = 0x17A568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A564u;
            // 0x17a568: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A56Cu; }
        if (ctx->pc != 0x17A56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A56Cu; }
        if (ctx->pc != 0x17A56Cu) { return; }
    }
    ctx->pc = 0x17A56Cu;
label_17a56c:
    // 0x17a56c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17a570: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x17A570u;
    SET_GPR_U32(ctx, 31, 0x17A578u);
    ctx->pc = 0x17A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A570u;
            // 0x17a574: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A578u; }
        if (ctx->pc != 0x17A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A578u; }
        if (ctx->pc != 0x17A578u) { return; }
    }
    ctx->pc = 0x17A578u;
label_17a578:
    // 0x17a578: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x17a578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17a57c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17a580:
    // 0x17a580: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x17a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a584: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17a584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a588: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17A588u;
    {
        const bool branch_taken_0x17a588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a588) {
            ctx->pc = 0x17A548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a548;
        }
    }
    ctx->pc = 0x17A590u;
    // 0x17a590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5A0u;
            // 0x17a5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A5A8u;
}
