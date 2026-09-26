#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii
// Address: 0x2baf10 - 0x2bb0f4
void MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii_0x2baf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii_0x2baf10");
#endif

    switch (ctx->pc) {
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bafb8u: goto label_2bafb8;
        case 0x2bafd4u: goto label_2bafd4;
        case 0x2bafe0u: goto label_2bafe0;
        case 0x2baff0u: goto label_2baff0;
        case 0x2baff8u: goto label_2baff8;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0d0u: goto label_2bb0d0;
        default: break;
    }

    ctx->pc = 0x2baf10u;

    // 0x2baf10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2baf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2baf14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2baf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2baf18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2baf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2baf1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2baf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2baf20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2baf20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2baf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2baf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2baf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2baf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2baf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2baf30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2baf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf34: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAF34u;
    {
        const bool branch_taken_0x2baf34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF34u;
            // 0x2baf38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf34) {
            ctx->pc = 0x2BAF4Cu;
            goto label_2baf4c;
        }
    }
    ctx->pc = 0x2BAF3Cu;
    // 0x2baf3c: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x2BAF3Cu;
    SET_GPR_U32(ctx, 31, 0x2BAF44u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF44u; }
        if (ctx->pc != 0x2BAF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF44u; }
        if (ctx->pc != 0x2BAF44u) { return; }
    }
    ctx->pc = 0x2BAF44u;
label_2baf44:
    // 0x2baf44: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2BAF44u;
    SET_GPR_U32(ctx, 31, 0x2BAF4Cu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF4Cu; }
        if (ctx->pc != 0x2BAF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF4Cu; }
        if (ctx->pc != 0x2BAF4Cu) { return; }
    }
    ctx->pc = 0x2BAF4Cu;
label_2baf4c:
    // 0x2baf4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2baf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2baf50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2baf54: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x2baf54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
    // 0x2baf58: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
    // 0x2baf5c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAF5Cu;
    {
        const bool branch_taken_0x2baf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF5Cu;
            // 0x2baf60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf5c) {
            ctx->pc = 0x2BAF68u;
            goto label_2baf68;
        }
    }
    ctx->pc = 0x2BAF64u;
    // 0x2baf64: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2baf64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baf68:
    // 0x2baf68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2baf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2baf6c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAF6Cu;
    {
        const bool branch_taken_0x2baf6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BAF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF6Cu;
            // 0x2baf70: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf6c) {
            ctx->pc = 0x2BAF78u;
            goto label_2baf78;
        }
    }
    ctx->pc = 0x2BAF74u;
    // 0x2baf74: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2baf74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2baf78:
    // 0x2baf78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2baf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2baf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2baf80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf84: 0xc0ad77c  jal         func_2B5DF0
    ctx->pc = 0x2BAF84u;
    SET_GPR_U32(ctx, 31, 0x2BAF8Cu);
    ctx->pc = 0x2BAF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF84u;
            // 0x2baf88: 0xa79484e8  sh          $s4, -0x7B18($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294935784), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF8Cu; }
        if (ctx->pc != 0x2BAF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAF8Cu; }
        if (ctx->pc != 0x2BAF8Cu) { return; }
    }
    ctx->pc = 0x2BAF8Cu;
label_2baf8c:
    // 0x2baf8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAF8Cu;
    {
        const bool branch_taken_0x2baf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF8Cu;
            // 0x2baf90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf8c) {
            ctx->pc = 0x2BAF9Cu;
            goto label_2baf9c;
        }
    }
    ctx->pc = 0x2BAF94u;
    // 0x2baf94: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2BAF94u;
    {
        const bool branch_taken_0x2baf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAF94u;
            // 0x2baf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf94) {
            ctx->pc = 0x2BB0D4u;
            goto label_2bb0d4;
        }
    }
    ctx->pc = 0x2BAF9Cu;
label_2baf9c:
    // 0x2baf9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2baf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bafa0: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x2bafa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bafa4: 0xc0ad77c  jal         func_2B5DF0
    ctx->pc = 0x2BAFA4u;
    SET_GPR_U32(ctx, 31, 0x2BAFACu);
    ctx->pc = 0x2BAFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFA4u;
            // 0x2bafa8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFACu; }
        if (ctx->pc != 0x2BAFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFACu; }
        if (ctx->pc != 0x2BAFACu) { return; }
    }
    ctx->pc = 0x2BAFACu;
label_2bafac:
    // 0x2bafac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2bafacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bafb0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BAFB0u;
    SET_GPR_U32(ctx, 31, 0x2BAFB8u);
    ctx->pc = 0x2BAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFB0u;
            // 0x2bafb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFB8u; }
        if (ctx->pc != 0x2BAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFB8u; }
        if (ctx->pc != 0x2BAFB8u) { return; }
    }
    ctx->pc = 0x2BAFB8u;
label_2bafb8:
    // 0x2bafb8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2bafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2bafbc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2bafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2bafc0: 0x24424c58  addiu       $v0, $v0, 0x4C58
    ctx->pc = 0x2bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x2bafc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bafc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bafc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bafcc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BAFCCu;
    SET_GPR_U32(ctx, 31, 0x2BAFD4u);
    ctx->pc = 0x2BAFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFCCu;
            // 0x2bafd0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFD4u; }
        if (ctx->pc != 0x2BAFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFD4u; }
        if (ctx->pc != 0x2BAFD4u) { return; }
    }
    ctx->pc = 0x2BAFD4u;
label_2bafd4:
    // 0x2bafd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bafd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafd8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BAFD8u;
    SET_GPR_U32(ctx, 31, 0x2BAFE0u);
    ctx->pc = 0x2BAFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFD8u;
            // 0x2bafdc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFE0u; }
        if (ctx->pc != 0x2BAFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFE0u; }
        if (ctx->pc != 0x2BAFE0u) { return; }
    }
    ctx->pc = 0x2BAFE0u;
label_2bafe0:
    // 0x2bafe0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bafe4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2bafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bafe8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BAFE8u;
    SET_GPR_U32(ctx, 31, 0x2BAFF0u);
    ctx->pc = 0x2BAFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFE8u;
            // 0x2bafec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFF0u; }
        if (ctx->pc != 0x2BAFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFF0u; }
        if (ctx->pc != 0x2BAFF0u) { return; }
    }
    ctx->pc = 0x2BAFF0u;
label_2baff0:
    // 0x2baff0: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BAFF0u;
    SET_GPR_U32(ctx, 31, 0x2BAFF8u);
    ctx->pc = 0x2BAFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAFF0u;
            // 0x2baff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFF8u; }
        if (ctx->pc != 0x2BAFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAFF8u; }
        if (ctx->pc != 0x2BAFF8u) { return; }
    }
    ctx->pc = 0x2BAFF8u;
label_2baff8:
    // 0x2baff8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2baff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2baffc: 0x27a6014c  addiu       $a2, $sp, 0x14C
    ctx->pc = 0x2baffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2bb000: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2bb000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bb004: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb008: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bb008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bb00c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2bb00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bb010: 0xc05224c  jal         func_148930
    ctx->pc = 0x2BB010u;
    SET_GPR_U32(ctx, 31, 0x2BB018u);
    ctx->pc = 0x2BB014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB010u;
            // 0x2bb014: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB018u; }
        if (ctx->pc != 0x2BB018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB018u; }
        if (ctx->pc != 0x2BB018u) { return; }
    }
    ctx->pc = 0x2BB018u;
label_2bb018:
    // 0x2bb018: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2BB018u;
    {
        const bool branch_taken_0x2bb018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB018u;
            // 0x2bb01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb018) {
            ctx->pc = 0x2BB0D4u;
            goto label_2bb0d4;
        }
    }
    ctx->pc = 0x2BB020u;
    // 0x2bb020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb028: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x2bb028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb02c: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2bb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2bb030: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2bb030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2bb034: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB034u;
    {
        const bool branch_taken_0x2bb034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB034u;
            // 0x2bb038: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb034) {
            ctx->pc = 0x2BB044u;
            goto label_2bb044;
        }
    }
    ctx->pc = 0x2BB03Cu;
    // 0x2bb03c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2bb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2bb040: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bb040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb044:
    // 0x2bb044: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BB044u;
    SET_GPR_U32(ctx, 31, 0x2BB04Cu);
    ctx->pc = 0x2BB048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB044u;
            // 0x2bb048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB04Cu; }
        if (ctx->pc != 0x2BB04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB04Cu; }
        if (ctx->pc != 0x2BB04Cu) { return; }
    }
    ctx->pc = 0x2BB04Cu;
label_2bb04c:
    // 0x2bb04c: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2bb04cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
    // 0x2bb050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb054: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2BB054u;
    {
        const bool branch_taken_0x2bb054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB054u;
            // 0x2bb058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb054) {
            ctx->pc = 0x2BB0D0u;
            goto label_2bb0d0;
        }
    }
    ctx->pc = 0x2BB05Cu;
    // 0x2bb05c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BB05Cu;
    SET_GPR_U32(ctx, 31, 0x2BB064u);
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB064u; }
        if (ctx->pc != 0x2BB064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB064u; }
        if (ctx->pc != 0x2BB064u) { return; }
    }
    ctx->pc = 0x2BB064u;
label_2bb064:
    // 0x2bb064: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2bb064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2bb068: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bb068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2bb06c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2bb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bb070: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bb070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bb074: 0x24a5f540  addiu       $a1, $a1, -0xAC0
    ctx->pc = 0x2bb074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964544));
    // 0x2bb078: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bb078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bb07c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BB07Cu;
    SET_GPR_U32(ctx, 31, 0x2BB084u);
    ctx->pc = 0x2BB080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB07Cu;
            // 0x2bb080: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB084u; }
        if (ctx->pc != 0x2BB084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB084u; }
        if (ctx->pc != 0x2BB084u) { return; }
    }
    ctx->pc = 0x2BB084u;
label_2bb084:
    // 0x2bb084: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bb088: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BB088u;
    SET_GPR_U32(ctx, 31, 0x2BB090u);
    ctx->pc = 0x2BB08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB088u;
            // 0x2bb08c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB090u; }
        if (ctx->pc != 0x2BB090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB090u; }
        if (ctx->pc != 0x2BB090u) { return; }
    }
    ctx->pc = 0x2BB090u;
label_2bb090:
    // 0x2bb090: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bb090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2bb094: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bb094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb098: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BB098u;
    SET_GPR_U32(ctx, 31, 0x2BB0A0u);
    ctx->pc = 0x2BB09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB098u;
            // 0x2bb09c: 0x2484d100  addiu       $a0, $a0, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB0A0u; }
        if (ctx->pc != 0x2BB0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB0A0u; }
        if (ctx->pc != 0x2BB0A0u) { return; }
    }
    ctx->pc = 0x2BB0A0u;
label_2bb0a0:
    // 0x2bb0a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0a4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bb0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bb0a8: 0xc05224c  jal         func_148930
    ctx->pc = 0x2BB0A8u;
    SET_GPR_U32(ctx, 31, 0x2BB0B0u);
    ctx->pc = 0x2BB0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0A8u;
            // 0x2bb0ac: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB0B0u; }
        if (ctx->pc != 0x2BB0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB0B0u; }
        if (ctx->pc != 0x2BB0B0u) { return; }
    }
    ctx->pc = 0x2BB0B0u;
label_2bb0b0:
    // 0x2bb0b0: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2bb0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2bb0b4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2bb0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2bb0b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB0B8u;
    {
        const bool branch_taken_0x2bb0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0B8u;
            // 0x2bb0bc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0b8) {
            ctx->pc = 0x2BB0C8u;
            goto label_2bb0c8;
        }
    }
    ctx->pc = 0x2BB0C0u;
    // 0x2bb0c0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2bb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2bb0c4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bb0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb0c8:
    // 0x2bb0c8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BB0C8u;
    SET_GPR_U32(ctx, 31, 0x2BB0D0u);
    ctx->pc = 0x2BB0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0C8u;
            // 0x2bb0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB0D0u; }
        if (ctx->pc != 0x2BB0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB0D0u; }
        if (ctx->pc != 0x2BB0D0u) { return; }
    }
    ctx->pc = 0x2BB0D0u;
label_2bb0d0:
    // 0x2bb0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb0d4:
    // 0x2bb0d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bb0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb0d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bb0d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb0dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bb0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb0e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0ECu;
            // 0x2bb0f0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB0F4u;
}
